#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    int arr[5];

    cout << "Enter size: ";
    cin >> size;

    int largest = INT_MIN;
    int s_largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > s_largest && arr[i] < largest)
        {
            s_largest = arr[i];
        }
    }
    cout << "Largest: " << largest;
    cout << "\nSecond Largest: " << s_largest;

    return 0;
}