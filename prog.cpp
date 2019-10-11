#include <iostream.h>
#include <conio.h>
void main()
{
int  x;
cout<<"Enter No Of rows ";
cin>>x;
for(int i=0;i<x;++i)
{
  for(int j=0;j<=1;++j)
     cout<<"*";
 cout<<"\n";
}
for(int m=0;m<x;++m)
{
  for(int n =x;n>0;n--)
   cout<<"*";
    cout<<"\n";
}
getch();
}
