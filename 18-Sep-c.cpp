#include <iostream>
using namespace std;
int main()
{
    // check if the string is palindrome

    string name = "madam";

    int start = 0;
    int end = name.size() - 1;

    while (start < end)
    {
        if (name[start] != name[end])
        {
            cout << name << " is not Palindrome";
            return 0;
        }
        start++;
        end--;
    }

    cout << name << " is Palindrome";

    return 0;
}