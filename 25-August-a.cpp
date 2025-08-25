#include <iostream>
using namespace std;

char convert(char name)
{
    char ans = name - 'a' + 'A';
}

int main()
{
    // convert a to A

    char n;
    cout << "Enter name: ";
    cin >> n;

    cout << "After conversion: " << convert(n);

    return 0;
}