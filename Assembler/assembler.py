def numToBinary(num):
    return '{:032b}'.format(num)

def loadMicroinstructions(microinstructionFile):
    opcodes = {}
    with open(microinstructionFile,'r') as f:
        text = f.read()
        text = text.strip()
        text = text.replace('\n','')
        text = text.replace('\t','')
        text = text.replace('parameter','')
        text = text.replace(' ','')
        text = text.replace('32\'d','')
        lines = [line  for line in text.split(';') if line != '']
        excludeOpcodes = ['JMPZY','JMPZN']
        for line in lines:
            tokens = line.split('=')
            if len(tokens) == 2 and tokens[0][-1] == '1':
                opcode = tokens[0][0:-1]
                if opcode in excludeOpcodes:
                    continue
                opcodes[opcode] = numToBinary(int(tokens[1]))
    return opcodes

def getLabels(assemblyFile):
    labels = {}
    with open(assemblyFile,'r') as f:
        lineNo = 0
        for line in f:
            line = line.replace('\t','')
            line = line.replace('\n','')
            line = line.replace(' ','')
            tokens = line.split(':')
            codeLine = ''
            if len(tokens) > 1:
                labels[tokens[0]] = numToBinary(lineNo)
            lineNo = lineNo + 1
    return labels

def processAssembly(assemblyFile, opcodes, labels):
    assemblyLines = []
    with open(assemblyFile,'r') as f:
        lineNo = 0
        for line in f:
            line = line.replace('\t','')
            line = line.replace('\n','')
            line = line.replace(' ','')
            tokens = line.split(':')
            codeLine = ''
            if len(tokens) > 1:
                codeLine = tokens[1]
            elif len(tokens) == 1:
                codeLine = tokens[0]
            subTokens = codeLine.split(';')
            finalToken = ''
            if len(subTokens) >= 1:
                finalToken = subTokens[0]
            if finalToken in opcodes:
                assemblyLines.append(opcodes[finalToken])
                lineNo = lineNo + 1
            elif finalToken in labels:
                assemblyLines.append(labels[finalToken])
                lineNo = lineNo + 1
            elif finalToken.isdigit():
                assemblyLines.append(numToBinary(int(finalToken)))
                lineNo = lineNo + 1
    return assemblyLines

def generateCoe(coeFile,assemblyLines):
    with open(coeFile,'w') as f:
        f.write('MEMORY_INITIALIZATION_RADIX=2;\n')
        f.write('MEMORY_INITIALIZATION_VECTOR=\n')
        lineCount=0
        for line in assemblyLines:
            f.write(line)
            if lineCount < 1023:
                f.write(',')
            else:
                f.write(';')
            f.write('\n')
            lineCount = lineCount + 1
            
        for i in range(1024-len(assemblyLines)):
            f.write(numToBinary(0))
            if lineCount < 1023:
                f.write(',')
            else:
                f.write(';')
            f.write('\n')
            lineCount = lineCount + 1
        
                
                
        

if __name__ == '__main__':
    opcodes = loadMicroinstructions('microinstructions.txt')
    labels = getLabels('code.txt')
    assemblyLines = processAssembly('code.txt',opcodes,labels)
    generateCoe('code.coe',assemblyLines)
