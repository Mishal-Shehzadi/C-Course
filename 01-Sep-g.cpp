#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count=1;

    for (int row = 1; row <= n; row++)
    {
        
        for (int col = row; col >= 1; col--)
        {
          char name='a'+col-1;
          cout<<name<<" ";
        }
        cout << endl;
    }

    return 0;
}