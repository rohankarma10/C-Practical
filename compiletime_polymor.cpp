
#include <iostream>
using namespace std;
class A
{
    float a, b;

public:
    void show(int x, int y)
    {
        a = x;
        b = y;
        cout << "a=" << a << "b=" << b << endl;
    }
    void show(float x, float y)
    {
        a = x;
        b = y;
        cout << "a=" << a << "b=" << b << endl;
    }
};
int main()
{
    A obj, obj2;
    obj.show(10, 20);
    obj2.show(4.5f, 5.5f);
    return 0;
}