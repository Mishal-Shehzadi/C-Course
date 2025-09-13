#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //fibonacci number at given number

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int arr[1000];

    arr[0]=0;
    arr[1]=1;

    for (int i=2; i<=n-1; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<n<<" fibonacci number is: "<<arr[n-1];
    

    return 0;
}