#include <iostream>

using namespace std;

struct
{
    char name[50];
    int id;
    float salary;
    float allowance;
    float deduction;
    float netsalary;

} e[4];

int main()
{
    // Task: Employee Salary Record
    
    for (int i = 1; i <= 4; i++)
    {
        cout << "\nEmployee ID: "<<i+100;
        e[i].id=i+100;

        cout << "\nEnter Employee Name: ";
        cin >> e[i].name;

        cout << "Enter salary: ";
        cin >> e[i].salary;

        cout << "Enter Allowance: ";
        cin >> e[i].allowance;

        cout << "Enter Deduction: ";
        cin >> e[i].deduction;

        // calculation
        e[i].netsalary = e[i].salary + e[i].allowance - e[i].deduction;
    }

    float maxsalary = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (e[i].netsalary > maxsalary)
        {
            maxsalary = e[i].netsalary;
        }
    }
    cout << "\n---------------------------------------\n";
    cout << "\n\nEmployee(s) with the Highest Net Salary: ";
    for (int i = 1; i <= 4; i++)
    {
        if (e[i].netsalary == maxsalary)
        {
            cout << "\nName: " << e[i].name;
            cout << "\nID: " << e[i].id;
            cout << "\nNet salary: "<< e[i].netsalary;
        }
    }
    cout << "\n---------------------------------------\n";

    return 0;
}