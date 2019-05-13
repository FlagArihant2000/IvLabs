#Rewrite your pay computation to give the employee 1.5 times the hourly rate for hours worked above 40 hours.

hours = int(input('Enter Hours: '))
rate = float(input('Enter rate: '))

if(hours <= 40):
	pay = hours*rate
else:
	pay = rate*40 + rate*1.5*(hours-40)

print('Pay: ',pay)

