#include <iostream>
using namespace std;

int main()
{
    //search element in array using for loop
    int arr[] = {1, 5, 8, 9};

    int n;
    cout << "Enter a number to search: ";
    cin >> n;

    int index = -1;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == n)
        {
            index = i;
            break;
        }
    }
    cout << "The index of " << n << " is " << index;

    return 0;
}