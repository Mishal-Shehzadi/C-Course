#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {6, 11, 7, 4, 8};
    bool found = false;
    int index = 0;

    int search;
    cout << "Enter a number: ";
    cin >> search;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == search)
        {
            cout << "Addresses: " << &arr[i] << endl;
            found = true;
            break;
        }
    }

    return 0;
}