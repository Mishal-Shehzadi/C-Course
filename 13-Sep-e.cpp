#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // search element in array (2D)

    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int search;
    cout << "Enter a number: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (search == arr[i][j])
            {
                cout << "yes";
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