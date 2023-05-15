// A function can return a reference in a similar way as it returns a pointer. When a function returns a reference, it returns an implicit pointer to its return value. This way, a function can be used on the left side of the assignment statement.

#include <iostream>
using namespace std;
int &returnValue(int &x)
{
    cout << "x=" << x << "The address of x is:" << &x << endl;
    return x;
}
int main()
{
    int a = 20;
    int &b = returnValue(a);
    cout << "a=" << a << "The address of a is:" << &a << endl;
    cout << "b=" << b << "The address of b is:" << &b << endl;
    returnValue(a) = 13;
    cout << "a=" << a << "The address of a is:" << &a << endl;
    return 0;
}
