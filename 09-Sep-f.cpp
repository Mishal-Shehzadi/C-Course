#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // print sum of first and second diagonals

    // 5 8 3 9
    // 6 2 8 4
    // 5 3 2 2
    // 2 8 1 9

    int arr[4][4];
    cout << "Enter numbers for 4*4 matrix: ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int first = 0;

    for (int i = 0; i < 4; i++)
    {
        first = first + arr[i][i];
    }
    cout << "First diagonal sum is " << first << endl;

    int second = 0;
    int i = 0;
    int j = 4 - 1;

    while (j >= 0)
    {
        second = second + arr[i][j];
        i++;
        j--;
    }
    cout << "Second diagonal sum is " << second;

    return 0;
}