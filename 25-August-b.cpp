#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int n = num;
    int ans = 0;
    int reminder;
    while (n)
    {
        reminder = n % 10;
        n /= 10;
        ans = ans + (int)round(pow(reminder, digit));
    }
    if (ans == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // Armstrong number
    // 23 have 2 digits
    // do 2+3
    // add power equal to total digits
    // so 2^2+3^2
    // 4+9
    // 13
    // 13 is not equal to 23 so 13 is not armstrong number

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digit = countdigit(n);

    cout << armstrong(n, digit);

    return 0;
}