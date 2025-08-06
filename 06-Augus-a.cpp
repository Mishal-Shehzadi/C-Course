#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cctype>
using namespace std;

int main()
{
    // PRACTICE
    // each task gotta run separately
    // Input and print a string
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "The name is: " << name;

    // Count the length of a string
    cout << "\nLenght of the name " << name << " is " << name.length();

    // Convert string to uppercase
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }
    cout << "\nUpper case of name " << name;

    ////Convert string to uppercase
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    cout << "\nLower case of name " << name;

    // Count vowels and consonants in a string
    int vowels = 0;
    int cons = 0;

    string line;
    cout << "Enter a word or a sectence: ";
    getline(cin, line);

    for (int i = 0; i < line.length(); i++)
    {
        char ch = tolower(line[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                cons++;
            }
        }
    }
    cout << "Vowels: " << vowels;
    cout << "\nConsonants: " << cons;

    // reverse a string
    string text = "";
    cout << "Enter text: ";
    getline(cin, text);

    string rev = "";

    for (int i = text.length(); i >= 0; i--)
    {
        rev = rev + text[i];
    }
    cout << "Reversed string: " << rev;

    // Check if the string is palindrome (madam, level etc.)
    string text = "";
    string rev = "";

    cout << "Enter a word to check if it palindrome: ";
    getline(cin, text);

    for (int i = text.length() - 1; i >= 0; i--)
    {
        rev = rev + text[i];
    }
    if (text == rev)
    {
        cout << text << " is a palindrome.";
    }
    else
    {
        cout << text << " is NOT a palindrome.";
    }

    // checknif both strings are equal or not
    string word1;
    string word2;

    cout << "Enter a word: ";
    getline(cin, word1);

    cout << "Enter another word: ";
    getline(cin, word2);

    if (word1 == word2)
    {
        cout << "Both strings are equal.";
    }
    else
    {
        cout << "Both strings are NOT equal.";
    }

    string name;
    cout << "Enter a word: ";
    getline(cin, name);

    cout << "ASCII values of " << name << " are:\nmi";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " = " << int(name[i]) << "\n";
    }

    
    return 0;
}
