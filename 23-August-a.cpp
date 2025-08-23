#include <iostream>
using namespace std;

int main()
{
    // decimal to binary using while loop 

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reminder = 0;
    int ans = 0;
    int mul = 1; //(10 has power 0 which is equal to 1)

    while (num > 0)
    {
        reminder = num % 2;
        num = num / 2;
        ans = reminder * mul + ans; // can be written as ans+=reminder+mul;
        mul = mul * 10;             // update mul so that it will be 10, 100, 1000 and so on
                                    //(could be written as mul*=10)
    }
    cout << "Answer: " << ans;

    return 0;
}