#include <iostream>

using namespace std;

class BS

{

public:

    /*

     * Binary Search function

     */

    void BinarySearch(int array[], int keynum, int num)

    {

        int low = 1;

        int high = num;

        int mid;

    do

    {

        mid = (low + high) / 2;

        if (keynum < array[mid])

        {

            high = mid - 1;

        }

   	else if (keynum > array[mid])

        {

            low = mid + 1;

        }

	}

	while (keynum != array[mid] && low <= high);

        if (keynum == array[mid])

        {

            cout<<"SEARCH SUCCESSFUL \n";

        }

        else

        {

            cout<<"SEARCH FAILED \n";

        }

    }

};

int main()

{

    int array[10];

    int i, j, num, temp, keynum;

    int low, mid, high;

    cout<<"Enter the value of num \n";

    cin>>num;

    cout<<"Enter the elements one by one \n";

    for (i = 0; i < num; i++)

    {

        cin>>array[i];

    }

    /*

     * Bubble sort

     */

    for (i = 0; i < num; i++)

    {

        for (j = 0; j < (num - i - 1); j++)

        {

            if (array[j] > array[j + 1])

            {

                temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;

            }

        }

    }

    cout<<"Enter the element to be searched \n";

    cin>>keynum;

    // Binary searching begins

    BS b1;

    b1.BinarySearch(array, keynum, num);

    return 0;

}
