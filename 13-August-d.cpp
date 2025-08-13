#include <iostream>
using namespace std;

// input
void marks(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter marks of student " << i + 1<<": ";
        cin >> arr[i];
    }
}

// highest
int highest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// lowest
int lowest(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// average
float average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return (float)sum / size;
}
int main()
{
    int num;
    cout << "Enter number of students: ";
    cin >> num;

    int Marks[num];
    marks(Marks, num);

    cout << "\nHighest Mraks: " << highest(Marks, num) << endl;
    cout << "Lowest Marks: " << lowest(Marks, num) << endl;
    cout << "Average Marks: " << average(Marks, num) << endl;

    return 0;
}