#include <iostream>
using namespace std;

//function for linear search in int array
int LinearS(int arr[50],int N,int item)
{
  for(int j=0;j<N;j++)
  {
    if(arr[j] == item)
      return j;
  }
 return -1;
}


int main()
{
  int arr[50],item,N,x;
  cout<<"Enter the array size (max 50): ";
  cin>>N;
  cout<<"\nEnter the array elements : \n";
  for(int i=0;i<N;i++)
  {
    cin>>arr[i];
  }
  cout<<"\nEnter the item to be searched : ";
  cin>>item;
  x=LinearS(arr,N,item);
  if(x == -1)
    cout<<"\nElement not found !!";
  else
    cout<<"\nElement found at position "<<x+1;
  return 0;
 }
