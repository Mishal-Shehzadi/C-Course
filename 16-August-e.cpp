#include <iostream>
using namespace std;

int main()
{
    // calculate power of a number

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int num;
    num = n;

    int power;
    cout << "Enter power: ";
    cin >> power;

    for (int i = 1; i < power; i++)
    {
        num = num * n;
    }
    cout << "Answer: " << num;
    return 0;
}