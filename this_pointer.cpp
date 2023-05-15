// In C++, this pointer is used to represent the address of an object inside a member function. We can use a keyword 'this' to refer to 'this' instance inside a class definition. One of the main usage of this keyword is to resolve ambiguity between the names of data members and function parameter.
#include <iostream>
using namespace std;
class Sample
{
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a + b;
        this->b = a - b;
    }
    void output()
    {
        cout << "a=" << a << endl
             << "b=" << b;
    }
};
int main()
{
    Sample a;
    a.input(5, 8);
    a.output();
    return 0;
}