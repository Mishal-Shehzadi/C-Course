#include <iostream>
using namespace std;
// deposit
void deposit(int &amount, int &balance)
{
    balance = balance + amount;
    cout << "Deposit Successful.\nNew Balance: " << balance << endl;
}

// withdraw
void withdraw(int &amount, int &balance)
{
    balance = balance - amount;
    if (amount > balance)
    {
        cout << "Insufficient Balance!" << endl;
    }
    else
    {
        cout << "Withdrawl successful.\nNew Balance: " << balance << endl;
    }
}

// check balance
void check(int &balance)
{
    cout << "Current Balance: " << balance << endl;
}

int main()
{
    int choice;
    int balance = 1000;
    int amount;

    do
    {
        cout << "1. Deposit\n2. Withdraw\n3. Check balance\n4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(amount, balance);
            
        }
        else if (choice == 2)
        {
            cout << "Enter amount to Withdraw: ";
            cin >> amount;
            withdraw(amount, balance);
            
        }
        else if (choice == 3)
        {
            check(balance);
            
        } else if (choice!=4){
            cout<<"Invalid choice.";
        }

    } while (choice != 4);

    cout << "Thankyou for using the ATM";

    return 0;
}