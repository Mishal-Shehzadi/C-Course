#include <iostream>
#include <climits>
using namespace std;
// swap numbers
void swapping(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
    // cout << a << " and " << b;
    return;
}

int main()
{
    int n1;
    cout << "Enter number 1: ";
    cin >> n1;

    int n2;
    cout << "Enter a number: ";
    cin >> n2;

    cout << "Before swapping: " << n1 << " and " << n2 << endl;
    cout << "After swapping: ";
    swapping(n1, n2);
    cout<<n1<<" and "<<n2;

    return 0;
}