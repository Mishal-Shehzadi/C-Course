#include <iostream>

using namespace std;
int main()
{
    int s1[5], s2[5], s3[5];
    int total[5];
    float avg[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1<<": ";
        cin >> s1[i] >> s2[i] >> s3[i];

        total[i] = s1[i] + s2[i] + s3[i];
        avg[i] = total[i] / 3.0;
    }

    int highesttotal = total[0];
    int highestindex = 0;

    int lowesttotal = total[0];
    int lowestindex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (total[i] > highesttotal)
        {
            highesttotal = total[i];
            highestindex = i;
        }
        if (total[i] < lowesttotal)
        {
            lowesttotal = total[i];
            lowestindex = i;
        }
    }

    int high1 = s1[0];
    int high2 = s2[0];
    int high3 = s3[0];

    for (int i = 0; i < 5; i++)
    {
        if (s1[i] > high1)
        {
            high1 = s1[i];
        }
        if (s2[i] > high2)
        {
            high2 = s2[i];
        }
        if (s3[i] > high3)
        {
            high3 = s3[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cout << "Totat: " << total[i] << endl;
        cout << "Average: " << avg[i] << endl;
    }

    cout << "\nHighest: " << highesttotal << " of student number " << highestindex + 1 << endl;
    cout << "\nLowest: " << lowesttotal << " of student number " << lowestindex + 1 << endl;

    cout << "\nSubject 1 highest = " << high1;
    cout << "\nSubject 2 highest = " << high2;
    cout << "\nSubject 3 highest = " << high3 << endl;

    return 0;
}