#include <iostream>
using namespace std;

void hello(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello Mishal" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    hello(n);

    return 0;
}