#include <iostream>
using namespace std;

int main()
{
    //print thebigger number 
    
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is greater";
    }
    else if (num2 > num1)
    {
        cout << num2 << " is greater";
    }
    else if (num1 == num2)
    {
        cout << "Both numbers can not be same";
    }
    return 0;
}