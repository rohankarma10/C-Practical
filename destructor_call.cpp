// // A destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed.
// Meaning, a destructor is the last thing that is going to be called before an object is destroyed.
// A destructor is a special member function which destroys an object as soon as the the scope of object ends.
// The destructor is called automatically by the compiler when an object goes out of the scope.
// Destructor are declared in the program to release memory space for future utilization.

#include <iostream>
using namespace std;

class MyClass
{
    int m, n;

public:
    MyClass()
    {
        m = 50;
        n = 30;
    }
    ~MyClass()
    {
        cout << "Memory is released!!!" << endl;
    }
    void display()
    {
        cout << "The sum is:" << (m + n) << endl;
    }
};
int main()
{
    MyClass obj;
    obj.display();
    return 0;
}
