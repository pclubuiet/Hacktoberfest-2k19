def main():
	print('Enter a number to calculate its factorial:')
	num = int(input())

	fact = factorial(num)
	print(f'\nThe factorial of {num} is: {fact}')

def factorial(a):
	if (a==1):
		return 1
	else:
		num = a * factorial(a-1)
		return num

main()
