
#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 7;

int main()
{
    int intArray[SIZE] ;
    for(int i=0;i<SIZE;i++)
    {
      cin>>intArray[i];
    }

    //Now we call the sort function
    sort(intArray, intArray + SIZE);

    cout << "Sorted Array looks like this." << endl;
    for (int i = 0; i <SIZE; ++i)
        cout << intArray[i] << " ";
}
   