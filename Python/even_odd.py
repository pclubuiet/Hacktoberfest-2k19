def main():
	print('Enter a number to check if it\'s even or odd:')
	num = int(input())

	result = even_odd(num)
	print(f'\nThe number {num} is {result}.')

def even_odd(a):
	if (a%2 == 0):
		return 'even'
	else:
		return 'odd'

main()
