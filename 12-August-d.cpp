
// multiple paramters
#include <iostream>
using namespace std;

// sum using void
void sum(int a, int b, int c)
{
    cout<<a+b+c;        //we have done the calculations here

    return;             //we can not write return 0 here because 0 
}                       //is int aand we are using void

int main()
{
    int num1;
    cout << "Enter number 01: ";                   //in order to use void, we can not call function with cout and endl; 
    cin >> num1;                                   //we can simply write the fucntion call in separate line
                                                   //if we want to make the output look better we can write additional stuffs
    int num2;                                      //on the previous and the next line without using endl so the output will
    cout << "Enter number 02: ";                   //be on the same line
    cin >> num2;

    int num3;
    cout << "Enter number 03: ";
    cin >> num3;

    cout<<"Sum of "<<num1<<", "<<num2<<" and "<<num3<<" is ";
    sum(num1, num2, num3);
    cout<<endl;

    return 0;
}