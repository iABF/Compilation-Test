import re

path = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\out_intermediate_code.txt'
path2 = 'D:\\Program\\C++\\Compilation Test\\Compilation Test\\optimized_code.txt'
file = open(path)
lines = file.read().split('\n')
file.close()
labelMap = set()
for line in lines:
    cur = re.search(r'goto L(\d)+', line)
    if cur is not None:
        labelMap.add(cur.group()[6:])
midLines = []
for line in lines:
    cur = re.match(r'L(\d)+:', line)
    if cur is not None:
        if cur.group()[1:-1] in labelMap:
            midLines.append(line)
    else:
        midLines.append(line)
tempMap = dict()
for line in midLines:
    pattern = re.compile(r't(\d+)')
    res = pattern.findall(line)
    ifCall = re.search('CALL', line)
    for tmp in res:
        if tmp in tempMap:
            if ifCall is not None:
                tempMap[tmp] += 1000
            tempMap[tmp] += 1
        else:
            tempMap[tmp] = 1
            if ifCall is not None:
                tempMap[tmp] += 1000
deleteList = set()
for item in tempMap.items():
    if item[1] == 1:
        deleteList.add(item[0])
finalLines = []
for line in midLines:
    pattern = re.compile(r't(\d)+')
    res = pattern.findall(line)
    if not set(res) & deleteList:
        finalLines.append(line)
file = open(path2, 'w')
for line in finalLines:
    file.write(line + '\n')
file.close()
