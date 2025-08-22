#include <iostream>
using namespace std;

int main()
{
    // print even numbers using do while loop
    int n;
    cout << "Enter anumber: ";
    cin >> n;

    int i = 1;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}