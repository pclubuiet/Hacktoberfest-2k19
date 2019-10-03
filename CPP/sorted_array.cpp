#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of values you wish to sort"<<endl;
	cin>>n;
	int array[n],temp,i;
	cout<<"Enter the values you wish to sort"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	cout<<"The values in sorted order are as:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}
