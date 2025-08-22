#include <iostream>
using namespace std;

int main()
{
    // find factorial of a number using do while loop
    
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = 1;
    int i = 1;

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);

    cout<<"Answer: "<<fact;

    return 0;
}