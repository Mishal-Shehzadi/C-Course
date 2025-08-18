#include <iostream>
using namespace std;

int main()
{
    //*
    //* *
    //* * *
    //* * * *
    //* * * * *

    for (int rows = 1; rows <= 5; rows++)
    {
        for (int col = 1; col <= rows; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}