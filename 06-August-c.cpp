#include <iostream>
#include <vector>
#include <climits>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter a word: ";
    getline(cin, name);

    //Replace all vowels with *
    for (int i = 0; i < name.length(); i++)
    {
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            name[i] = '*';
        }
    }
    cout << "String after replacing vowels: " << name << endl; 

    //Swap case (upper to lower, lower to upper)
    for (int i=0; i<name.length(); i++){
        if (isupper(name[i])){
            name[i] = tolower(name[i]);
        } else if (islower (name[i])){
           name[i]=toupper(name[i]);
        }
    }
    cout<<"After changes: "<<name;

    


    return 0;
}