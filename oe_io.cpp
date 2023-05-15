//               Hierarchy of stream classes       //
// All the stream classes are derived from base class ios, which stores the state of stream and handles error. The ios class has an associated streambuf which acts as a buffer for the stream. The istream and ostream, derived from ios, are meant for input and output respectively. The iostream uses mutiple inheritance to acquire the capabilities of both istream and ostream class. The classes istream_withassign, ostream_withassign and iostream_withassign are derived from istream, ostream and iostream respectively, by adding the definition of assignment operator(=).

// Extraction and insertion operator overloading: C++ is able to input and output a built-in data types using the stream extraction operator>> and stream insertion operator<<. The stream insertion and extracton operator can also be overloaded to input and output user-defined types like object.

#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "F:" << D.feet << "I=" << D.inch;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inch;
        return input;
    }
};
int main()
{
    Distance D1(11, 10), D2(2, 11), D3;
    cout << "Enter the value of object:";
    cin >> D3;
    cout << "First distance:" << D1;
    cout << "Second distance:" << D2;
    cout << "Third distance:" << D3;
    return 0;
}