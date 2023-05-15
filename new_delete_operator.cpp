// The new and delete operator are used for runtime memory management. They are used for dynamic memory allocation while a program is running. The new operator is used to allocate a memory dynamically and return a pointer to the start of it. The delete operator frees a memory previously allocated using new.

// Advantages of new malloc(): New is a operator whereas malloc() is a function.
// 1. new doesn't need the sizeof() operator but malloc() needs to know the size before memory allocation.
// 2. operator new can call a constructor while malloc() cannot.
// 3. operator new can be overloaded but malloc() can never be overloaded.
// 4. new can initialize an object while allocating memory to it whereas malloc() cannot.
#include <iostream>
using namespace std;
int main()
{
    int *p;
    cout << "Enter a number:" << endl;
    p = new int;
    cin >> *p;
    cout << "The value of p is:" << *p;
    delete p;
}