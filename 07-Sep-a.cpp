#include <iostream>
using namespace std;

int main()
{
    // search element in Array using while loop
    
    int arr[] = {1, 4, 8, 2};

    int search;
    cout << "Enter a number to search: ";
    cin >> search;

    int i = 0;
    int index = -1;

    while (i < 4)
    {
        if (arr[i] == search)
        {
            index = i;
        }
        i++;
    }
    cout << "The index of " << search << " is " << index;

    return 0;
}