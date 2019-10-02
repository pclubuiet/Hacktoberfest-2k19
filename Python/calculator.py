def addition(number1, number2):
    return number1 + number2

def multiplication(number1, number2):
    return number1 * number2

def divison(number1, number2):
    return number1 / number2

def substraction(number1, number2):
    return number1 - number1

if __name__ == "__main__":
    number1 = int(input('Enter first number : '))
    number2 = int(input('Enter the two number : '))

    print('1. enter "add" for add the number')
    print('2. enter "multiple" for multiple the number')
    print('3. enter "div" for division the number')
    print('4. enter "substract" for substract the number')
    operator = str(input('enter calculation operation : '))

    if(operator == 'add'):
        print('Operation Result : ', addition(number1, number2))
    if(operator == 'multiple'):
        print('Operation Result : ', multiplication(number1, number2))
    if(operator == 'div'):
        print('Operation Result : ', divison(number1, number2))
    if(operation == 'substract'):
        print('Operation Result : ', substraction(number1, number2))
