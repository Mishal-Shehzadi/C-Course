#include <iostream>
using namespace std;

int main()
{
    // Fibonacci Series of a number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int last = 0;         
    int prev = 1;
    int cur;

    for (int i = 0; i <= n; i++)
    {
        cout << last << " ";
        cur = last + prev;
        last = prev;
        prev = cur;
    }

    return 0;
}