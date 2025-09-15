#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int sum[4][4] = {0};

    int first = 0;

    for (int i = 0; i < n; i++)
    {

        first = first + arr[i][i];
    }
    cout << "sum of first diagonal is: " << first;

    int second = 0;
    int i = 0;
    int j = n - 1;

    while (j >= 0)
    {
        second = second + arr[i][j];
        i++;
        j--;
    }
    cout << "\nSecond Diagonal: " << second << endl;

    return 0;
}