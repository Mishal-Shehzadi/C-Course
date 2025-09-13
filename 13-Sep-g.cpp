#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // print sum of first and second diagonals

    // 5 8 3 9
    // 6 2 8 4
    // 5 3 2 2
    // 2 8 1 9

    int arr[4][4];
    
    int first = 0;
    int second =0;

    cout<<"Enter values for 4*4 matrix: ";
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<4; i++){
        first+=arr[i][i];   
    }
    cout<<"First diagonal: "<<first<<endl;

    int i=0;
    int j=4-1;

    while (j>=0){
            second=second+ arr[i][j];
            i++;
            j--;
    }
    cout<<"Second diagonal: "<<second;
   

    return 0;
}