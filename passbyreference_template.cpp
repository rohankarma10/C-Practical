// Template is a frame which is defined with its actual meaning in c++. We can draw any logic using template. It provides appropriate code at the time of execution. We can use the template by two ways: 1). Function template(Generic function) 2). Class template(Generic class).... Template helps in defining generic classes and functions and hence allows generic programming. Generic programming is an approach where generic data types are used as parameters and same piece of code also works for various data types.
// Syntax:
// template<class type>
// return_type function_name(argument type or parametrized list)
// {
//     body;
// }

#include <iostream>
using namespace std;

template <typename T>
void my_swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x1 = 2, y1 = 3;
    float x2 = 4.5f, y2 = 7.5f;
    cout << "Before swap:" << endl;
    cout << "x1=" << x1 << ", y1=" << y1 << endl;
    cout << "x2=" << x2 << ", y2=" << y2 << endl;
    my_swap<int>(x1, y1);
    my_swap<float>(x2, y2);
    cout << "After swap:" << endl;
    cout << "x1=" << x1 << ", y1=" << y1 << endl;
    cout << "x2=" << x2 << ", y2=" << y2 << endl;
    return 0;
}

// Output:
// Before swap:
// x1=2, y1=3
// x2=4.5, y2=7.5
// After swap:
// x1=3, y1=2
// x2=7.5, y2=4.5