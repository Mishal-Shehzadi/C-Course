#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //smallest and second smallest

    int arr[5] = {8, 3, 7, 2, 9};

    int smallest = INT_MAX;
    int s_smallest=INT_MAX;

    for (int i=0; i<5; i++){
        if (arr[i]<smallest){
            s_smallest=smallest;
            smallest=arr[i];
        }  else if (arr[i]<s_smallest && arr[i]!=smallest){
            s_smallest=arr[i];
        }
    }
    cout<<"Samallest: "<<smallest;
    cout<<"\nSecond smallest: "<<s_smallest;
    

    return 0;
}