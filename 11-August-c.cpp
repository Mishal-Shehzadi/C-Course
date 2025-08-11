#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter Account Holder Name: ";
    cin >> name;

    int acc_number;
    cout << "Enter Account Number: ";
    cin >> acc_number;

    int balance;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    // calculations
    float deposit;
    float withdraw;

    int choice;

    do
    {
        cout << "\n---- Menu ----\n"
             << endl;

        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            balance = balance + deposit;

            cout << "Deposit Successful." << endl;
            cout << "New Balance: " << balance << endl;
        }

        else if (choice == 2)
        {
            cout << "Enter Withdraw Amount: ";
            cin >> withdraw;

            if (withdraw > balance)
            {
                cout << "Insufficient funds!" << endl;
            }
            else
            {
                balance = balance - withdraw;
                cout << "Withdrawal successful. \nNew Balance: " << balance << endl;

                if (balance < 1000)
                {
                    cout << "Warning: Low Balance!" << endl;
                }
            }
        }

        else if (choice==3){
            cout<<"\nCurrent Balance: "<<balance<<endl;
        }
     } while (choice != 4);

     cout<<"\nExiting Program..."<<endl;



        return 0;
    }