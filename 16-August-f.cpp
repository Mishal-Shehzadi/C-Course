#include <iostream>
using namespace std;

int main()
{
    // sum of n narural number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Answer: " << sum << endl;

    // or

    cout << n * (n + 1) / 2; 
    
    //we dont gotta use for loop here
    // the formula is enough to perfrom the required task

    return 0;
}