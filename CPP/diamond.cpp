#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter height of the diamond: ";
    cin>>height;
    if(height%2==0)
    {height=height+1;}
    for(int i=0;i<(height/2)+1;i++)
    {
        for(int j=(height/2-i);j>0;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*i+1);k++)
        {
            cout<<"*";
        }
        for(int j=(height/2-i);j>0;j--)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<height/2;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        for(int k=height;k>2*(i+1);k--)
        {
            cout<<"*";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }    
}
