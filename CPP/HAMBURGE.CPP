#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<11;j++)
		{
			if(i==2)
			cout<<"1";
			else
			cout<<"0";
		}
		cout<<endl;
	}
	getch();
}