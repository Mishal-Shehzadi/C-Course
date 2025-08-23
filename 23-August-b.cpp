#include <iostream>
using namespace std;

int main()
{
    // decimal to binary using for loop
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reminder = 0;
    int ans = 0;
    int mul = 1;

    for (int i = n; i > 0; i--)
    {
        reminder = n % 2;
        n = n / 2;
        ans = reminder * mul + ans;
        mul *= 10;
    }
    cout << "Answer: " << ans;

    return 0;
}