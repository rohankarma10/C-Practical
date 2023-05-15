// // // // Manipulators are the helping function that can modify the I/O streams. It doesn't mean that we can change the value of variable, it only modifies I/O stream using insertion(>>) and extraction(<<) operator.
// // // // Manipulators are the special function that can be included in I/O statement that alter the format parameter of stream.
// // // // Manipulators are the operators that are used to format data display.
// // // // To access manipulators, the file iomanip.h should be included in the program.

// // // Manipulators without Arguments: The most important manipulators that are defined by the Iostream library are provided below:
// // 1. endl: It is defined in ostream. It is used to create new line. After creating new line, it flushes the output stream.
// // 2. ws: It is defined in istream. It ignores the white spaces in the string sequence.
// // 3. ends: It is also defined in ostream which inserts the null character in the output stream.
// // 4. flush: It is also defined in ostream which flushes the output stream(forces all the output written on a screen). without flush, output would be same.

// Manipulators with Arguments:
// setw and setfill are defined in a header file!!!
// Some important manipulators in <iomanip> are:
// 1. setw(val): Used to set field width in the output operations.
// 2. setfill(c): used to fill the character 'c' in output stream.
// 3. setprecision(val): used to set new values for the precision of floating point values.
// 4. setbase(val): Used to set numeric base values for numeric values.
// 5. setiosflags(flag): used to set the format flag specified by parameter mask.
// 6. resetiosflags(m): used to reset the format flag specifed by parameter mask.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 100;
    cout << num << endl;
    cout << "Hex value:" << hex << num << endl;
    cout << "OCtal value:" << oct << num << endl;

    cout << "Hex value:" << setbase(16) << num << endl;
    cout << "Octal value:" << setbase(8) << num << endl;
}