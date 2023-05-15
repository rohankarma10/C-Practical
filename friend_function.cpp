
// C++ allows a mechanism in which non member function has access permission to private members of the class. This can be done by declaring a non-member friend to the class whose private data is to be accessed.
// A friend function is a function which is not a member of the class instead of that it can access the private and protected members of the class.

// Syntax:
// friend return_type function_name(class ob)
// {
//     body;
// }

#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void input()
    {
        cout << "Enter values:";
        cin >> a >> b;
    }
    friend void add(A ob);
};
void add(A ob)
{
    int c;
    c = ob.a + ob.b;
    cout << "c=" << c;
}
int main()
{
    A kk;
    kk.input();
    add(kk);
    return 0;
}