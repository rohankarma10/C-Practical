// getline() function is used to read the whole line of text that ends with newline character.
//  C++ getline() function is a built-in function defined in <string.h> header file that allows accepting and reading the single and multiple lines strings from the input stream.
//  In C++, a cin object allows the input from the user but not multi-word and multi-line strings. That's where getline() function comes in handy.
// getline() function is invoked for reading character input into variable line.

#include <iostream>
using namespace std;
int main()
{
    char city[50];
    cout << "City Name:";
    cin.getline(city, 50);
    cout << "City:" << city << endl;
    return 0;
}