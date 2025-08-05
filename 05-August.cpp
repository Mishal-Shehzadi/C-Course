#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // 05-August
    int num[5] = {1, -2, 3, 4, 5};
    int n = 5;

    int largest = INT_MIN;
    int smallest = INT_MAX;

    cout << "The numbers are: ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    // print smallest and largest number

    for (int i = 0; i < n; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "\nLargest number is: " << largest;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "\nSmallest number is: " << smallest;

    int even = 0;
    int odd = 0;
    int negative = 0;

    cout << "\nEven numbers are: ";
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            even = even + 1;
            cout << num[i] << " ";
        }
    }
    cout << "\nTotal even numbers are: " << even;

    cout << "\nOdd numbers are: ";
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 != 0)
        {
            odd = odd + 1;
            cout << num[i] << " ";
        }
    }
    cout << "\nTotal odd numbers are: " << odd;

    cout << "\n-ve numbers are: ";
    for (int i = 0; i < n; i++)
    {
        if (num[i] < 0)
        {
            negative = negative + 1;
            cout << num[i] << " ";
        }
    }
    cout << "\nTotal -ve numbers are: " << negative;

    return 0;
}