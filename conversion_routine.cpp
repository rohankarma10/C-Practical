// User to user defined data type: This conversion is exactly like the conversion of basic to user-defined data type i.e one argument constructor is used.//
// Conversion routine is defined as a one argument constructor in destination class and takes the argument of source class type//

// Eg:
// class A objA
// class B objB
// objA=objB
// Class B
// {
//     body of class B;
// }
// Class A
// {
//     private:
//     //
//     public:
//     class A(Class B obj B)
//     {
//         code conversion from class B to class A)
//     }
// };
#include <iostream>
using namespace std;

class Distance
{
    int meter;
    float centimeter;

public:
    Distance(int m, int c)
    {
        meter = m;
        centimeter = c;
    }
    int getMeter()
    {
        return meter;
    }
    float getCentimeter()
    {
        return centimeter;
    }
};
class Dist
{
    int feet;
    int inch;

public:
    Dist()
    {
        feet = 0;
        inch = 0;
    }
    Dist(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Dist(Distance d)
    {
        float m, c;
        m = d.getMeter();
        c = d.getCentimeter();
        feet = m * 3.3;
        inch = c * 0.3;
        feet = feet + inch / 12;
        inch = inch % 12;
    }
    void display()
    {
        cout << "Feet=" << feet << endl
             << "Inch=" << inch;
    }
};
int main()
{
    Distance d1(6, 40);
    Dist d2 = d1;
    d2 = d1;
    d2.display();
}

// Output:
// Feet=20
// Inch=4