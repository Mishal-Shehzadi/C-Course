#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    
    if (n < 2)
    {
        cout << n << " is not prime";
        return 0;
    }
    else
    {  
        int i = 2;
        while (i < n)
        {
            if (n%i == 0)
            {
                cout << n << " is not prime";
                return 0;
            }
            i++;
        }
        cout << i << " is prime";
    }

    return 0;
}