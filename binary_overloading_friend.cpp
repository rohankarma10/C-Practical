//     - friend function:(We can pass two arguments)
//       friend return_type operator op(arg. list)

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
        cout << "A=" << a << endl
             << "B=" << b;
    }
    friend Demo operator+(Demo &obj, Demo &obj2);
};
Demo operator+(Demo &obj, Demo &obj2)
{
    Demo temp(0, 0);
    temp.a = obj.a + obj2.a;
    temp.b = obj.b + obj2.b;
    return temp;
}
int main()
{
    Demo obj(10, 20);
    Demo obj1(-10, -20);
    Demo obj2(0, 0);
    obj2 = obj + obj1;
    obj2.show();
    return 0;
}
