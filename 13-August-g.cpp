#include <iostream>
using namespace std;

// prime number
bool prime(int a)
{
    if (a < 2)
    {
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is " << num << " prime? " << prime(num) << endl;

    return 0;
}