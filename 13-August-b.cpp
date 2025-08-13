#include <iostream>
using namespace std;

// average
float average(float a, float b, float c)
{
    float ans = (a + b + c) / 3.0;
    return ans;
}

// grade
char grade(float average)
{
    if (average >= 80)
    {
        return 'A';
    }
    else if (average >= 70)
    {
        return 'B';
    }
    else if (average >= 60)
    {
        return 'C';
    }
    else if (average >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int sub1;
    cout << "Enter Subject 01 Marks: ";
    cin >> sub1;

    int sub2;
    cout << "Enter Subject 02 Marks: ";
    cin >> sub2;

    int sub3;
    cout << "Enter Subject 03 Marks: ";
    cin >> sub3;

    cout << "The average of " << sub1 << ", " << sub2 << " and " << sub3 << " is " << average(sub1, sub2, sub3) << endl;

    cout << "Grade: " << grade(average(sub1, sub2, sub3));
    return 0;
}