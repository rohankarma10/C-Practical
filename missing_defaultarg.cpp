// Principle reason of using default argument:  In c++, function can be called without specifying all its argument. But it doesn't work on any general function. The function declaration must provide default values to those arguments that are not specified. When arguments are missing from a function call, default values will be used for calculation.

#include <iostream>
using namespace std;

float interest(int p, int t = 5, float r = 5.0);
int main()
{
    float rate, i1, i2, i3;
    int pr, yr;
    cout << "Enter Principal, rate & year:";
    cin >> pr >> rate >> yr;
    i1 = interest(pr, yr, rate);
    i2 = interest(pr, yr);
    i3 = interest(pr);
    cout << i1 << i2 << i3;
    return 0;
}
float interest(int p, int t, float r)
{
    return ((p * t * r) / 100);
}

// output:
// Enter Principal, rate & year:5000 10 2
// 1000 500 1250