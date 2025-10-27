#include <iostream>
using namespace std;
// function for prime number and factorial
void prime(int a)
{
    if (a < 2)
    {
        cout << "Not prime";
        return;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                cout << a << " is not prime";
                return;
            }
        }
    }
    cout << a << " is prime";
    return;
}

void fact(int a)
{
    int ans = 1;

    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    cout << ans;
    return;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    prime(n);
    cout << endl;
    fact(n);

    return 0;
}