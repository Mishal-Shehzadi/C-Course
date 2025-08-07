#include <iostream>
using namespace std;

struct
{
    char name[50];
    int runs;
    int wickets;
    int matches;
    float averageruns;
} p[5];

int main()
{   
    // Task: Cricket Player Stats

    int sumr = 0;
    int sumw = 0;

    for (int i = 1; i <= 5; i++)
    {

        cout << "\nEnter details of Player: " << i;

        cout << "\nName: ";
        cin >> p[i].name;

        cout << "Total Runs: ";
        cin >> p[i].runs;
        sumr = sumr + p[i].runs;

        cout << "Wickets: ";
        cin >> p[i].wickets;
        sumw = sumw + p[i].wickets;

        cout << "Matches played: ";
        cin >> p[i].matches;

        // calculation
        p[i].averageruns = p[i].runs / p[i].matches;
    }

    int maxruns = 0;

    for (int i = 1; i <= 4; i++)
    {
        if (p[i].averageruns > maxruns)
        {
            maxruns = p[i].averageruns;
        }
    }

    cout << "\n---------------------------------------\n";
    cout << "\nPlayer(s) with the Highest Average Runs: ";
    for (int i = 1; i <= 4; i++)
    {
        cout << "\nName: ";
        cout << "\nAverage Runs: " << p[i].averageruns;
    }
    cout << "\n---------------------------------------\n";

    cout<<"\nTotal runs by all players: "<<sumr;
    cout<<"\nTotal wickets by all players: "<<sumw;


    return 0;
}