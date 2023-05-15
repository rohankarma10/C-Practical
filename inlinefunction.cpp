// Inline function is a request to the compiler(not a command) to make a function as inline function to reduce the overhead of the calling function.
// If the compiler treats a function as an inline, it substitute the code of function in a single line.
// Inline function should contain single code of instruction.
// Syntax:
// Inline return_type function_name()
// {
//     single instruction;
// }
#include <iostream>
using namespace std;
inline int cube(int a)
{
    return a * a * a;
}
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "The cube of " << n << ":" << cube(n) << endl;
}
