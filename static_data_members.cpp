// Static: Static Data members & Static Member function

// Static Data members:
// 1. Whenever we declare a data member as static either inside or outside of a class then it is static data member.
// 2. There is only one copy of static data member even if there are many object classes.
// 3. It is always initialized with zero because it's default value is 0.
// 4. It is shared memory for all the objects of a class.
// 5. It retains its value.

// Static Member function:
// 1. If we create an object of a class as static then it is static member function.
// 2. It can only access the static data members.
// 3. It is also accessible if we don not have any objects of a class.

#include <iostream>
using namespace std;

class A
{
    int a;
    static int b;

public:
    A(int x, int y)
    {
        a = x;
        y = b;
    }
    void show()
    {
        cout << a << "\n"
             << b;
    }
    static void disp()
    {
        cout << b;
    }
};
int A::b = 0;
int main()
{
    A obj(10, 20);
    obj.show();
    A::disp();
}
