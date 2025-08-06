#include <iostream>
#include <vector>
#include <climits>
#include <cctype>

using namespace std;

int main()
{


    // self test
    // each task must run separately

    // Count the length of a string
    string name;
    cout << "Enter something: ";
    getline(cin, name);

    cout << "The length of " << name << " is " << name.length();

    // Convert string to uppercase
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }
    cout << "\nThe upper case is " << name;

    // convert string to lowercase
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    cout << "\nThe lower case is " << name;

    // Count vowels and consonants in a string
    int vowels = 0;
    int cons = 0;

    for (int i = 0; i < name.length(); i++)
    {
        char ch = tolower(name[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else
        {
            cons++;
        }
    }
    cout << "\nTotal vowels in " << name << " are: " << vowels;
    cout << "\nTotal consonents in " << name << " are: " << cons;

    // Reverse a string
    string rev = "";
    for (int i = name.length(); i >= 0; i--)
    {
        rev = rev + name[i];
        ;
    }
    cout << "\nReverse of " << name << " is " << rev;

    // Check if the string is palindrome (madam, level etc.)
    string name = "";
    string rev = "";

    cout << "Enter a word: ";
    cin >> name;

    for (int i = name.length() - 1; i >= 0; i--)
    {
        rev = rev + name[i];
    }
    if (name == rev)
    {
        cout << name << " is palindrome.";
    }
    else
    {
        cout << name << " is not palindrome.";
    }

    string w1;
    string w2;

    cout << "Enter a word:";
    getline(cin, w1);

    cout << "Enter another word: ";
    getline(cin, w2);

    if (w1 == w2)
    {
        cout << "Both strings are same.";
    }
    else
    {
        cout << "Both strings are NOT same.";
    }
    
    return 0;
}