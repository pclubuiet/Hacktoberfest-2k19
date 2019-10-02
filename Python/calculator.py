def sum(a,b):
	print("Sum is ", a+b)

def sub(a,b):
	print("Substraction is ",a-b)

def mul(a,b):
	print("Multiplication is ", a*b)

def div(a,b):
	print("Division is ", a/b)

x= float(input("Enter 1'st number "))
y=float(input("Enter 2nd number "))
z = input("""1. Addition
2.Substraction
3.Multiplication
4.Division""")
if(z=='1'):
	sum(x,y);
if(z=='2'):
	sub(x,y);
if(z=='3'):
	mul(x,y);
if(z=='4'):
	div(x,y);
