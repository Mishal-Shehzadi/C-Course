#include <iostream>
#include <climits>
using namespace std;

int main()
{
    //find smallest number
    
    int arr[5] = {4, 6, 11, 2, 1};

    int ans = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << "The smallest number is: " << ans;

    return 0;
}