// In multiple inheritance, there may be possibility that a class may inherit the member function with the same name from two or more base classes and the derived class may not have same named member function as those of its base classes. The object of derived class need to access one of the same named member function of the base class then it is ambiguity as it is not clear to compiler which member function should be invoked. Simply, ambiguity is the state when the compiler is confused.
// Ambiguity can be resolved by using the scope resolution operator to specify the class in which the member function lies as given below:
//  ObjectName.BaseClassNAme::FunctionName(..);

#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};
class C : public B, public A
{
public:
    void show()
    {
        cout << "...";
    }
};
int main()
{
    C objC;
    objC.show();
    objC.A::show();
    objC.B::show();
}
