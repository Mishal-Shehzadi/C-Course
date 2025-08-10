#include <iostream>
using namespace std;

int main()
{
    string name;
    int account_number;
    int balance;
    string acc_type;

    string bankname;
    cout << "Enter Bank Name: ";
    cin >> bankname;

    int no_of_accounts;
    cout << "Enter the number of accounts allowed: ";
    cin >> no_of_accounts;

    int account;
    cout << "Enter how many accounts you want to create: ";
    cin >> account;

    if (account > no_of_accounts)
    {
        cout << "You can't create more than " << no_of_accounts << " accounts" << endl;
    };

    // creating account
    cout << "\n--- Creating Accounts ---" << endl;
    for (int i = 1; i <= account; i++)
    {
        cout << "\nEnter name: ";
        cin >>name;

        cout << "Enter Account Number: ";
        cin >>account_number;

        cout << "Enter Initial Balance: ";
        cin >>balance;

        cout << "Enter Account Type (Saving/Current): ";
        cin >>acc_type;
    }

    cout << "\n\n"
         << account << " Accounts Created Successfully!";

    cout << "\n---------------------------------" << endl;
    cout << bankname << " Bank - Main Menu" << endl;
    cout << "1. Create New Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Show All Accounts\n6. Exit" << endl;
    cout << "---------------------------------" << endl;

    int choice;
    cout<<"Enter choice: ";
    cin>>choice;

    int deposit;
    int withdraw;
    float newbalance_deposit;
    float newbalance_withdraw;

    switch (choice){
        case 1:
        if (account>no_of_accounts){
           cout << "Cannot create more accounts. Limit reached!" << endl; 
        } else {
             cout << "\nEnter name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> account_number;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Enter Account Type (Saving/Current): ";
        cin >> acc_type;

        cout<<"Account Created Successfully!"<<endl;
        }
        break;

        case 2:
        cout<<"Enter Account Number: ";
        cin>>account_number;

        cout<<"Enter Deposit Amount: ";
        cin>>deposit;

        cout<<"Deposit Successful!";

        newbalance_deposit=balance+deposit;

        cout<<"New Balance: "<<newbalance_deposit;

        break;

        case 3:
        cout<<"Enter Account Number: ";
        cin>>account_number;

        cout<<"Enter Withdraw Amount: ";
        cin>>withdraw;

        cout<<"Withdrawl Successful!";

        newbalance_withdraw=balance-withdraw;

        cout<<"New Balance: "<<newbalance_withdraw;
        break;

        case 4:
        cout<<"Enter Account Number: ";
        cin>>account_number;

        cout<<"Name: ";
        cin>>name;

        cout<<"Account Type: ";
        cin>>acc_type;

        cout<<"Balance: "<<balance;

        break;

        case 5:
        cout<<"Name: "<<name;  
        cout<<" | no. "<<account_number<<" | Balance: "<<balance<<" | Type: "<<acc_type;

        break;

        case 6:
        cout<<"Existing Program...Thank you for using "<<bankname<<" Bank!";

    }
    

    return 0;
}