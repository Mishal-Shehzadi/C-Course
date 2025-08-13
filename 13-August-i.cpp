#include <iostream>
using namespace std;

// sum
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

// average
int average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum / size;
}

int main()
{
    int size;
    cout << "Enter size of Array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum: " << sum(arr, size) << endl;
    cout << "Average: " << average(arr, size) << endl;

    return 0;
}