# Fizz Buzz Program
# Hacktoberfest 2k19

userInput = int(input('Enter a number: '))

for i in range(1, userInput + 1):
    if i % 3 == 0 and i % 5 == 0:
        print('Fizz Buzz')
    elif i % 3 == 0:
        print('Fizz')
    elif i % 5 == 0:
        print('Buzz')
    else:
        print(i)
