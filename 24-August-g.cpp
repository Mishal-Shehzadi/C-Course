#include <iostream>
using namespace std;

//find nCr

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int r;
    cout<<"Enter second number: ";
    cin>>r;

    cout<<nCr(n, r);

    return 0;
}