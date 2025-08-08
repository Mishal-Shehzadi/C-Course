#include <iostream>
using namespace std;

enum Days {
    Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
    //Topic: Enums
    //Task: Days of the Week
    int num;
    cout<<"Enter a number from 1-7: ";
    cin>>num;


    Days day=static_cast<Days>(num);

    if (day==Monday){
        cout << "It's Monday - Start of the week!";
    } else if (day==Tuesday){
        cout << "It's Tuesday - Second gear!";
    } else if (day == Wednesday) {
        cout << "It's Wednesday - Midweek hustle!";
    } else if (day == Thursday) {
        cout << "It's Thursday - Almost there!";
    } else if (day == Friday) {
        cout << "It's Friday - Almost weekend!";
    } else if (day == Saturday) {
        cout << "It's Saturday - Weekend fun!";
    } else if (day == Sunday) {
        cout << "It's Sunday - Relax and recharge!";
    } else {
        cout << "Invalid input! Please enter a number from 1 to 7.";
    }
    return 0;
}