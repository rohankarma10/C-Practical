// Pass by reference or (pass by address) means to pass the reference of arguments in the calling function to the corresponding formal parameter of the called function so that a copy of an address of actual parameter is  made in the memory.

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 2, y = 3;
    cout << "Before swap:";
    cout << "x=" << x << "y=" << y << endl;
    swap(x, y);
    cout << "After swap:";
    cout << "x=" << x << "y=" << y << endl;
    return 0;
}
