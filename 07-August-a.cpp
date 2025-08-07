#include <iostream>
using namespace std;

struct
{
    int id;
    char name[50];
    int age;
    float salary;
} s[3];

int main()

{      
       //Topic Name: Structure
       //Task 01

    for (int i = 1; i <= 3; i++)
    {

        cout << "ID no. " << i;

        cout << "\nEnter name: ";
        cin >> s[i].name;

        cout << "Enter age: ";
        cin >> s[i].age;

        cout << "Enter salary: ";
        cin >> s[i].salary;
    }

    for (int i = 1; i <= 3; i++)
    {

        cout << "\nName: " << s[i].name;
        cout << "\tAge: " << s[i].age;
        cout << "\t Salary: " << s[i].salary;
    }

    //
    return 0;
}