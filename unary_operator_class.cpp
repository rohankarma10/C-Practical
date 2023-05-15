// 1. Unary: contains only one operand.
//     - class function:
//        return_type operator op()
//        {
//         body;
//        }

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
    void operator-()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    Demo obj(-10, 20);
    obj.show();
    -obj;
    obj.show();
    return 0;
}
