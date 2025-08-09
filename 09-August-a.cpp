#include <iostream>
using namespace std;

int main()
{
    /*  int a = 10;
      int* ptr = &a;

      cout << ptr << endl;
      cout << &a << endl;
      cout << &ptr << endl;

      float price = 100.05;
      float* ptr = &price;

      cout << &price << endl;
      cout << ptr << endl;
      cout << &ptr; 

    int a = 10;
    int* ptr = &a;
    int** parptr = &ptr;

    cout << &ptr << endl;
    cout << parptr << endl; */

    //Dereference operator (value at address)

    int a=20;
    int* ptr=&a;
    int** parptr=&ptr;

    cout<<*(&a)<<endl;
    cout<<*(ptr)<<endl; //(here we are talking about the value of ptr)
    cout<<**(parptr)<<endl;

    return 0;
}