// The new and delete operator are used for runtime memory management. They are used for dynamic memory allocation and freeing of memory while a program is running. The new operator is used for memory allocation and return a pointer to the start of it. The delete operator frees a memory previously allocated using new.
// Advantages of new malloc(): New is a operator whereas malloc() is a function.
// 1. new doesn't need the sizeof() operator but malloc() needs to know the size before memory allocation.
// 2. operator new can call a constructor while malloc() cannot.
// 3. operator new can be overloaded but malloc() can never be overloaded.
// 4. new can initialize an object while allocating memory whereas malloc() cannot.
#include <iostream>
#include <new>
using namespace std;
int main()
{
    int *p;
    try
    {
        p = new int; // dynamic memory allocation
    }
    catch (bad_alloc x)
    {
        cout << "Memory allocation failed!!!";
        return 1;
    }
    *p = 100;
    cout << "The value of p is:" << *p;
    delete p; // frees the dynamically allocated memory
}
