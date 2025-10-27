#include <iostream>
using namespace std;

void sum (int a, int b){
    int sum=0;
    sum=a+b;
    cout<<sum;
    return;
}

int main()
{
    int n1;
    cout<<"Enter number 01: ";
    cin>>n1;

    int n2;
    cout<<"Ennter number 02: ";
    cin>>n2;

    cout<<"The sum of "<<n1<<" and "<<n2<<" is ";
    sum(n1, n2);

    return 0;
}