// A constructor with no parameter
#include <iostream>
using namespace std;
class A
{
    int a, b, c;

public:
    A()
    {
        a = 8;
        b = 9;
    }
};
int main()
{
    A c;
    cout << "a=" << c.a << endl
         << "b=" << c.b;
    return 1;
}