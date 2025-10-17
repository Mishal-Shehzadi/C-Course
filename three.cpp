#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int largest = INT_MIN;
    int s_largest = INT_MIN;

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
    cout << "Largest number is " << largest;
    cout << "\nSecond Largest number is " <<s_largest;

    return 0;
}