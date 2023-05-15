// Function that share the same name are said to be overloaded functions and the process is referred to function overloading. I.e the function overloading is the process of using same name for two or more functions. Each redefinition of a function must use different kinds of parameter, different sequence of parameter and different number of parameter. The number, type and sequence of paramater is called a function signature.
// for eg. int add(int, int)  &   float add(int,int)

#include <iostream>
using namespace std;
float perimeter(float);
int perimeter(int, int);
int perimeter(int, int, int);
int main()
{
    cout << "Perimeter of a circle:" << perimeter(2.0) << endl;
    cout << "Perimeter of a rectangle:" << perimeter(10, 10) << endl;
    cout << "Perimeter of a triangle:" << perimeter(5, 10, 15) << endl;
    return 0;
}
float perimeter(float r)
{
    return (2 * 3.14 * r);
}
int perimeter(int l, int b)
{
    return (2 * (l + b));
}
int perimeter(int a, int b, int c)
{
    return (a + b + c);
}

// output:
// Perimeter of a circle:12.56
// Perimeter of a rectangle:40
// Perimeter of a triangle:30
