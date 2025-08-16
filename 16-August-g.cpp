#include <iostream>
using namespace std;

int main()
{
    // sum of sqaure of 'n' natural number

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    cout << "Answer: " << sum;
    
    return 0;
}