#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "Hi...I'm base class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Hello...I'm derived class" << endl;
    }
};
int main()
{
    A *p;
    B ob;
    p = &ob;
    p->show();
    return 0;
}