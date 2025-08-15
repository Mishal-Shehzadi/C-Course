#include <iostream>
using namespace std;

int main()
{ // shoow adult or teenager
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an Adult" << endl;
    }
    else
    {
        cout << "You are a teenager" << endl;
    }
    return 0;
}