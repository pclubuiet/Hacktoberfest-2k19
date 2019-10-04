#include<iostream>
using namespace std;
long int fastpower(long int a,long int n)           //Declaring function
{
  long int power=a,store=1;                  //initialising varialble power to a and store to 1
  while(n!=1)
  {
    power=power*power;
    if(n%2)
     {
      store*=a;  //if n is odd multiply store with a
     }
    n/=2;
    a*=a;
    if(n==1)
     power*=store; //multiply power with store
  }
  /* this can be explained with an example :
     for a=2 and n=15, loop runs 3 times
     for first iteration power=a^2 and store=a  n=7
     for second : power=a^4 and store=a^3  n=3
     for third : power=a^8 and store=a^7
     now n becomes 1 and power = a^(8+7)=a^15
     note: here a is the original number a, but its value is changed over the loop in function
     which does not effect its original value (as its is called by value in function!!)
     same is the case with n */
return power;
}

int main()
{
  long int a,n;
  cout<<"Enter a number and its power to be calculated: "
  cin>>a>>n;
  long int power=fastpower(a,n);
  cout<<a<<" to the power "<<n<<" = "<<power;
}
