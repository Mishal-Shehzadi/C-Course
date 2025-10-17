#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int smallest = INT_MAX;
    int s_smallest = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < s_smallest && arr[i] != smallest)
        {
            s_smallest = arr[i];
        }
    }
    cout << "Smallest: " << smallest;
    cout << "\nSecond Smallest: " << s_smallest;

    return 0;
}