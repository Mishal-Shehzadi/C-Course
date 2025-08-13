#include <iostream>
using namespace std;

// palindrome
void check(string word)
{
    string rev = "";

    for (int i = word.length() - 1; i >= 0; i--)
    {
        rev = rev + word[i];
    }
    if (word == rev)
    {
        cout << word << " is palindrome.";
    }
    else
    {
        cout << word << " is not palindrome";
    }
}

int main()
{
    string text;
    cout << "Enter a word: ";
    cin >> text;

    check(text);

    return 0;
}