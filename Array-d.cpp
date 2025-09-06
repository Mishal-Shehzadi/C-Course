#include <iostream>
using namespace std;

int main()
{
    //find sum and average 
    
    int arr[5] = {1, 2, 3, 4, 5};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    int average = sum / 5;

    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << average;

    return 0;
}