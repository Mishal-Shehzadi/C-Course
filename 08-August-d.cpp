#include <iostream>
using namespace std;
 
enum grade{
    A=90,
    B=80,
    C=70,
    D=60,
    F=0,
};

int main()
{
    // Student Grade Analyzer 

    int input;
    cout<<"Enter your percentage: ";
    cin>>input;

    if (input>=A){
        cout<<"Your grade: A";
        cout<<"\nRemarks: Excellent";
    } else if (input>=B){
        cout<<"Your grade: B";
        cout<<"\nRemarks: Very Good";
    } else if (input>=C){
         cout<<"Your grade: C";
        cout<<"\nRemarks: Good";
    } else if (input >=D){
         cout<<"Your grade: D";
        cout<<"\nRemarks: Need Improvement";
    } else {
         cout<<"Your grade: F";
        cout<<"\nRemarks: Failed";
    }
  
    return 0;
}