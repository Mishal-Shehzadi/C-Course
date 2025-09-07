#include <iostream>
using namespace std;

int main()
{
    // reverse string

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0;
    int end = s.size() - 1;

    cout << "The reverse of " << s << " is ";
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;

    return 0;
}