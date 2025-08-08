#include <iostream>
using namespace std;

 enum months {
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    August, 
    September,
    October,
    November,
    December
 };

int main()
{
    // Code: Month Name + Days Output
    
    int input;
    cout<<"Enter any number from 1 to 12: ";
    cin>>input;

    months month=static_cast<months>(input);

    
   /* if (month==January || month==March || month==May || month==July || month==August || month==October || month==December){
        cout<<"This month has 31 days.";
    } else if (month == February) {
        cout<<"February has 28 days.";
    } else {
        cout<<input<<"This month has 30 days.";
    } */

    // OR

    string names [13] =  {
    " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };

    int days [13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout<<names[input]<<" has "<< days[input] <<" days.";

    return 0;
}