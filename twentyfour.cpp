#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    
    for (int i=1; i<n; i++){
        sum=sum+(n*n);
    }
    cout<<"Result: "<<sum;



    return 0;
}