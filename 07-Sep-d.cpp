#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // second Max

    int arr[] = {2, 6, 4, 3, 8, 5, 1};
    int largest = INT_MIN;
    int s_largest = INT_MIN;

    for (int i = 0; i < 7; i++)
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

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << s_largest << endl;
    return 0;
}