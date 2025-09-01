#include <iostream>
using namespace std;

int main()
{
    // print fibonacci number

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int current;
    int previous = 1;
    int last = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << last << " ";
        current = previous + last;
        last = previous;
        previous = current;
    }
    return 0;
}