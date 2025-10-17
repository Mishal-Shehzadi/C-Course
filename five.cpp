#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int last = 5;
    for (int i = 5 - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = last;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}