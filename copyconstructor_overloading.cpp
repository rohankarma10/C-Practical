// A copy constructor is a constructor that creates an object by initializing it with an object of the same class, which has been created previously. A copy constructor is used to: 1) initialize an object from another of the same type. 2) copy am object to pass it as argument to a function. 3). Copy an object to return it from a function.
// If the class has pointer variables and some dynamic memory allocations then it is must to have a copy constructor. The most common form of copy constructor is:
//  class name(const classname &obj)
//  {
//      body of constructor;
//  }
#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A()
    {
        cout << "Default constructor called";
    }
    A(int a, int b)
    {
        cout << "Parametrized constructor called\n";
        x = a;
        y = b;
    }
    A(const A &old)
    {
        x = old.x,
        y = old.y;
        cout << "Copy constructor called\n";
    }
    void print()
    {
        cout << x << "\n"
             << y << "\n";
    }
};
int main()
{
    A obj(10, 20);
    A obj2(obj);
    obj2.print();
    return 0;
}