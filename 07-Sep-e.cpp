#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    int arr[5] = {1, 3, 7, 2, 9};
    int smallest = INT_MAX;
    int s_smallest = INT_MAX;
    int ans;

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
    cout << "smallest: " << smallest << endl;
    cout << "Second smallest: " << s_smallest;

    return 0;
}