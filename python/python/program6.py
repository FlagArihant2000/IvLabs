str = 'X-DSPAM-CONFIDENCE: 0.8475 '

index = str.find(':')

number = float(str[index+1:len(str)-1])

print(number)
