#include <iostream>
using namespace std;

int main()
{
    // print all even numbers using while loop

    int n;
    cout << "Enter anumber: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}