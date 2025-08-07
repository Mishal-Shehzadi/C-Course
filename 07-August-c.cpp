#include <iostream>

using namespace std;

struct
{
    char title[50];
    char author[50];
    int year;
    float price;
} b[3];

int main()
{ 
    // Enter book title, author, year, price and show details of books that are below 500
    
    cin.ignore();
    for (int i = 1; i <= 3; i++)
    {

        cout << "\nEnter details of Book " << i;
        // book title

        cout << "\nEnter Book Title: ";
        cin.getline(b[i].title, 50);

        // book author
        cout << "Enter Name of Author: ";
        cin.getline(b[i].author, 50);

        // year
        cout << "Enter the year: ";
        cin >> b[i].year;

        // price
        cout << "Enter the price: ";
        cin >> b[i].price;

        cin.ignore();
    }

    cout << "\n\nBooks with price less than 500: ";
    for (int i = 1; i <= 3; i++)
    {
        if (b[i].price < 500)
        {
            cout << "\n\nTitle: " << b[i].title;
            cout << "\nAuthor: " << b[i].author;
            cout << "\nYear: " << b[i].year;
            cout << "\nPrice: " << b[i].price;
        }
    }
    return 0;
}