// Operator overloading:
// - To assign more than one operation on a same operator is known as O O.
// - To achieve Operator Overloading, we have to write a special function 'operator()'.
// - There are two ways to write operator()
//       1. Class function
//       2. Friend function

// Syntax:
//     return_type operator op(argument list)
//     {
//         body;
//     }

// Operators that cannot be overloaded are:
// 1. Scope operator(::)
// 2. Size of()
// 3. Member selector(.)
// 4. Member pointer selector(*)
// 5. Ternary operator(?:)

// - Types of Operator Overloading:
//       1. Unary
//       2. Binary

// 1. Unary: contains only one operand.
//     - class function:
//        return_type operator op()
//        {
//         body;
//        }

//     -friend function:
//     friend return_type operator op(arg. list)
//     {
//         body;
//     }

// 2. Binary: contains two operands.
//    - class function:(only one argument is passed)
//       return_type operator op(arg. list)

//     - friend function:(We can pass two arguments)
//       friend return_type operator op(arg. list)

#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance(int ft = 0, int in = 0)
    {
        feet = ft;
        inch = in;
    }
    void show()
    {
        cout << "Feet:" << feet << " Inch=" << inch << endl;
    }

    // using member function
    Distance add(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;

        if (temp.feet >= 12)
        {
            temp.feet++;
            temp.inch -= 12;
        }
        return temp;
    }

    // using friend function
    friend Distance add(Distance d1, Distance d2);
};
Distance add(Distance d1, Distance d2)
{
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;
    if (temp.feet >= 12)
    {
        temp.feet++;
        temp.inch -= 12;
    }
    return temp;
}
int main()
{
    Distance d1(10, 7), d2(8, 5), d3, d4;

    // member function
    d3 = add(d1, d2);
    cout << "Using member function:" << endl;
    d3.show();

    // friend function
    d4 = add(d1, d2);
    cout << "Using friend function:" << endl;
    d4.show();
    return 0;
}
