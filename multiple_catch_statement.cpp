// Errors can be broadly categorized into two types:
// 1. Compile time errors: Errors that caught during compiled time is called Compile time errors. Compile time errors include library reference, syntax errors, or incorrect class import.
// 2. Runtime errors: Errors that caught during runtime is called Runtime errors. They are also called exceptions. An exception that caught during runtime creates serious issues.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a | b;
        }
    }

    catch (char c)
    {
        cout << "Caught exception:char type";
    }
    catch (int i)
    {
        cout << "Caught exception:int type";
    }
    catch (short s)
    {
        cout << "Caught exception:short type";
    }
    cout << "\nHello";
}