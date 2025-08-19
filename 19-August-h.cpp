#include <iostream>
using namespace std;

int main()
{
    //        E
    //      E D
    //    E D C
    //  E D C B
    // E D C B A

    int n;
    cout << "Entera number: ";
    cin >> n;

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = n; col >= row; col--)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}