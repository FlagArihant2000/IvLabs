#Rewrite your pay computation with time-and-a-half for overtime and create a function called computepay which takes two paramenters (hours and rate)

def computepay(hours,rate):
	if(hours <= 40):
		pay = hours*rate
	else:
		pay = rate*40 + rate*1.5*(hours-40)
	return pay

try:
	hours = int(input('Enter Hours: '))
	rate = float(input('Enter rate: '))
	print('Pay: ',computepay(hours,rate))
except ValueError:
	print('Error, please enter numerical value')
