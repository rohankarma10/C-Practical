// Pure virtual function is a virtual function in C++ for which we need not to write any function declaration and only we have to declare it. It is declared vy assigning 0 in the declaration. An abstract class is a class in C++ which have atleast one pure virtual function.

#include <iostream>
using namespace std;
class A
{
public:
    virtual void s() = 0;
};
class B : public A
{
public:
    void s()
    {
        cout << "Hello...I'm derived class";
    }
};
int main()
{
    A *p;
    B ob;
    p = &ob;
    p->s();
    return 0;
}
// Output:
// Hi... I'm base class!!!

// Hello...I'm derived class!!!