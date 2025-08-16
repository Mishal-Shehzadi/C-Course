#include <iostream>
using namespace std;

int main()
{ 
    // print a to z

    char name;

    for (name = 'a'; name <= 'z'; name = name + 1)
    {
        cout << name << " ";
    }
    
    return 0;
}