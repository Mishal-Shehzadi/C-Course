#include <iostream>
using namespace std;

// count words
int words(string sentence)
{
    int count = 0;
    bool inword = false;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && !inword)
        {
            inword = true;
            count++;
        }
        else if (sentence[i] == ' ')
        {
            inword = false;
        }
    }
    return count;
}

// vowels
int vowels(string sentence)
{
    int count = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Total words: " << words(sentence) << endl;
    cout << "Total vowels: " << vowels(sentence) << endl;
    return 0;
}