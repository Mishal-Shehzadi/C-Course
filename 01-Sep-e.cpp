#include <iostream>
using namespace std;

int main()
{
    // sum of square of n natural number

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i;
    }

    cout << "Answer: " << sum;
    
    return 0;
}