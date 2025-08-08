#include <iostream>
using namespace std;

enum signals{
    Red=1,
    Yellow,
    Green
};

int main()
{    
    // Task: Traffic Signal Action

    int input;
    cout<<"Enter signal number (1-3): ";
    cin>>input;
    
    signals signal = static_cast<signals>(input);

    if (signal==1){
       cout<< "Red - Stop!";
    } else if (signal==2){
        cout<<"Yellow - Ready to Go!";
    } else if (signal==3){
        cout<<"Green - Go!";
    } else {
        cout<<"Invalid input! Enter 1 to 3.";
    }

    return 0;
}