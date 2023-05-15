// - Exception means the run-time errors. Thus exception handling means the process to handle the run-time errors.
// - Unexpected condition that alters the normal flow of program.
// - occurs due to invalid data, device failure, loss of network connection, code errors, opening an unavailable file, physical limitations and apply false conditions.
// - normal flow of program can be maintained even after the run-time errors.
// - Exception handling are built upon three keywords:
//    1. TRY
//     2.  CATCH
//       3. THROW

//       1. Throw: A program throws an exception when the problem shows up. This is done using throw keyword.
//       2. Catch: A program catches an exception with an exception handler. This is done using catch keyword.
//       3. Try: Try identifies a block of code for which a particular exceptions will be activated.
// Syntax:
// try
// {
//     throw exception;
//     //risky code
// }
// catch(type argument)
// {
//     //code;
// }
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two numbers:";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a / b;
            cout << "Result:" << c;
        }
    }
    catch (int x)
    {
        cout << "Can't be divided by";
    }
}

// Output:
// Enter two numbers:100 10
// Result:10