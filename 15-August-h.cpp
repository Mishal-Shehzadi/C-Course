#include <iostream>
using namespace std;

int main()
{ // loop

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Square of " << i << " is " << i * i << endl;
    }
    return 0;
}