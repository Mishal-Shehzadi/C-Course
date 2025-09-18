#include <iostream>
using namespace std;
int main()
{
    //find size of string without string.size()
    
    string name="Mishal";
    int size =0;
    while (name[size]!='\0'){
        size++;
    }
    cout<<"Size of name is "<<size;

    return 0;
}