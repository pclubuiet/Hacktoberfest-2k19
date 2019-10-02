#include <iostream>

void fizzbuzz(int number)
{
	for(int i=1;i<=number;++i)
	{
		bool printed=false;
		if(i%3==0){
			std::cout<<"Fizz";
			printed=true;
		}
		if(i%5==0){
			std::cout<<"Buzz";
			printed=true;
		}
		if(!printed)
		{
			std::cout<<i;
		}
		std::cout<<std::endl;
	}
}

int main()
{
	int number;
	std::cout<<"input number: ";
	std::cin>>number;
	fizzbuzz(number);
	return 0;
}
