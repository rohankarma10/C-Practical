// Private modifier / derivation : The scope of private members are restricted to its own class.The private members can't be accessed by derived class or in main() function.
//  Public modifier / derivation : Public members can be accessed by its own class, derived class and in main() function.own class derived class main() private : Y N N protected : Y Y N public : Y Y Y
// Derived class constructor : A constructor plays a vital role in initializing an object.While using constructors during inheritance,
// as long as the base class doesn't take any arguments, the derived class need not have a constructor function. However, if a base class contains a constructor with one or more arguments, then it is mandatory fot the derived class to have a constructor and pass the arguments to the base class constructor. While applying inheritance, we usually create objects in derived class. Thus it makes sense for the derived class to pass the arguments to the base class constructor. When both derived class and base class contains constructor, the base class constructor is executed first and then derived class constructor is executed.
// The derived class takes the responsibilty of providing initial values to the base class. The derived class receives the entire list of required values as its argument and passes them on to the base class constuctor.

// program to show how constructors are invoked in derived class//
#include <iostream>
using namespace std;

class Alpha
{
    int x;

public:
    Alpha(int i)
    {
        x = i;
        cout << "\n alpha initialized";
    }
    void showX()
    {
        cout << " x=" << x;
    }
};

class Beta
{
    float y;

public:
    Beta(float j)
    {
        y = j;
        cout << " beta initialized";
    }
    void showY()
    {
        cout << "\n y=" << y;
    }
};

class Gamma : public Beta, public Alpha
{
    int m, n;

public:
    Gamma(int a, float b, int c, int d) : Alpha(a), Beta(b)
    {
        m = c;
        n = d;
        cout << "\n gamma initialized";
    }
    void showMn()
    {
        cout << "\n m=" << m;
        cout << "\n n=" << n;
    }
};
int main()
{
    Gamma g(5, 7.65, 30, 100);
    cout << "\n";
    g.showX();
    g.showY();
    g.showMn();
}

// output:

//  beta initialized
//  alpha initialized
//  gamma initialized
//  x=5
//  y=7.65
//  m=30
//  n=100