#include <iostream>
#include <string>
using namespace std;

int main()
{
    //reverse a string

    string name="Mishal";
    cout<<name;

    int start=0;
    int end=name.size()-1;

    while(start<end){
        swap (name[start], name[end]);
        start++;
        end--;
    }
    cout<<" after reverse is: "<<name;

    return 0;
}