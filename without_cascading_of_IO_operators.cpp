// Cascading of Input & Output operator means the consecutive occurrence of input and output operators in single statement.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << "The value of a:";
    cout << a;
    cout << "The value of b:";
    cout << b;
    return 0;
}
// Here in this program, all cin and cout statements use separate input and output operators respectively.