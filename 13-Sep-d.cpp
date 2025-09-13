#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // rotate array by 1

    int arr[] = {2, 7, 4, 11, 5, 8};

    int last=8;
    int n=6;

    for (int i=n-2; i>=0; i--){
        arr[i+1]=arr[i];
    }

    arr[0]=last;

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}