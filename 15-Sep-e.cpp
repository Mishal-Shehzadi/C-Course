#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1, 9};
    int largest = INT_MIN;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest: " << largest << endl;
    return 0;
}