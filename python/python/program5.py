#Write another program that prompts for a list of numbers as above and at the end prints put both the maximum and minimum of the numbers instead of the average

numbers = []
i = 0
while True:
	try:
		number = input('Enter a number: ')
		if(number == 'done'):
			break
		else:
			number = int(number)
	except ValueError:
		print('Invalid Input')
		continue

	numbers = numbers + [number]
	i = i + 1

print(f"{sum(numbers)} {i} {max(numbers)} {min(numbers)}")
