/* PROGRAM TO CHECK WHETHER NUMBER IS ODD OR EVEN */

#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number; //Reading input
    if(number & 1)
        cout<<number<<" is odd"<<endl; //Checking through bitwise AND operator
    else
        cout<<number<<" is even"<<endl;
    return 0;
    }
