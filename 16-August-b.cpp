#include <iostream>
using namespace std;

int main()
{
    // print numbers in rerverse order

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for (int i = num ; i >= 1; i--)
    {
        cout << i << " ";
    }

    return 0;
}