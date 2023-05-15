// 1. Unary: contains only one operand.
//     -friend function:
//     friend return_type operator op(arg. list)
//     {
//         body;
//     }

#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    Demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A=" << a << " B=" << b << endl;
    }
    friend void operator-(Demo &obj);
};
void operator-(Demo &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main()
{
    Demo obj(-10, 20);
    obj.show();
    -obj,
        obj.show();
    return 0;
}