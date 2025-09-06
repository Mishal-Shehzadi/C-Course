#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //find largest number in array
    
    int arr[5] = {4, 6, 11, 2, 1};

    int ans = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << "The Largest number is: " << ans;

    return 0;
}