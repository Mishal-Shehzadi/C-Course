
// Prime Numbers and Factorials
#include <iostream>
using namespace std;

// function for prime number
bool prime(int a)
{
    if (a < 2)
    {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;  //we can use void but have to remove 0 and 1
}              //and can use cout<<0<<endl; if the output is supposed to be 1 or 0

// function for factorial
int fact(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int num1;
    cout << "Enter  number 01: ";
    cin >> num1;

    int num2;
    cout << "Enter  number 02: ";
    cin >> num2;

    // number 01 is prime or not
    cout << "\nIs " << num1 << " prime number? " << prime(num1) << endl;

    // NUmber 01 Factorial
    cout << "Factorial of " << num1 << " is " << fact(num1) << endl;

    // number 02 is prime or not
    cout << "\nIs " << num2 << " prime number? " << prime(num2) << endl;

    // NUmber 02 Factorial
    cout << "Factorial of " << num2 << " is " << fact(num2) << endl;

    // is Number 02 - Number 01 prime?
    cout << "\n3Is " << num2 << "-" << num1 << " prime number? " << prime(num2 - num1) << endl;

    // number 2 - number 1 factorial
    cout << "Factorial of " << num2 << "-" << num1 << " is " << fact(num2 - num1) << endl;

    return 0;
}