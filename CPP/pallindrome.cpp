#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  string s;
  cout<<"Enter a string:";
  cin>>s;
  int len = strlen(s);
  int check=0;
  for(int i=0;i<len;i++)
    if(s[i]!=s[len-i-1])
     {
       check=1;
       cout<<"\n\nString is not a pallindrome!!";
       break;
     }
  if(check)
    cout<<"\n\n String is a pallindrome!!";
}
