#include <iostream>
using namespace std;

int main()
{ // print all even numbers till n
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i = i + 2)
    {
        cout << i << endl;
    }
    return 0;
}