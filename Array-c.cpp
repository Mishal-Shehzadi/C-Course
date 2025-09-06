#include <iostream>
using namespace std;

int main()
{
    //find sum of numbers given by user
    
    int n;
    cout<<"Enter how many numbers do you want: ";
    cin>>n;

    int arr[n];
    int sum=0;

    for(int i=0; i<n; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];

        sum=sum+arr[i];
    }

    cout<<"Sum is "<<sum;



    return 0;
}