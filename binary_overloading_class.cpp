// 2. Binary: contains two operands.
//    - class function:(only one argument is passed)
//       return_type operator (arg. list)

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
        cout << "a=" << a << endl
             << "b=" << b;
    }
    Demo operator+(Demo &obj)
    {
        Demo temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};
int main()
{
    Demo d1(10, 20), d2(-10, -20), d3(0, 0);
    d3 = d1 + d2;
    d3.show();
    return 0;
}
