#Rewrite your pay program using try and except so that your program handles non-numeric input gracefully by printing a message and exiting the program. 

try:
	hours = int(input('Enter Hours: '))	
	rate = float(input('Enter rate: '))
	if(hours <= 40):
		pay = hours*rate
	else:
		pay = rate*40 + rate*1.5*(hours-40)
	print('Pay: ',pay)
except ValueError:
	print('Error, please enter numeric input')


