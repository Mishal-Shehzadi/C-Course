#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // search element in array (2D)

    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int x;
    cout << "Enter a number to check if it is present: ";
    cin >> x;

    bool found = false;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == x)
            {
                cout << "Yes";
                found = true;
                break;
            }
        }
    }

    if (!found)
    {
        cout << "No";
    }

    return 0;
}