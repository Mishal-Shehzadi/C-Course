#include <iostream>
using namespace std;

int main()
{
    // reverse array

    int arr[6] = {6, 11, 7, 4, 8};

    int start = 0;
    int end = 4;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reverse of Array is ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}