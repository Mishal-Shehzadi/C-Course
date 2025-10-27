#include <iostream>
#include <climits>
using namespace std;

void marks(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter mark of " << i + 1<<" ";
        cin >> arr[i];
    }
    return;
}
int highest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int lowest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int sub[size];

    marks(sub, size);
    cout << "Highest: " << highest(sub, size) << " and " << "Lowest: " << lowest(sub, size);

    return 0;
}