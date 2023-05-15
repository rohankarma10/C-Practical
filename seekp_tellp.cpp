#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Today.txt", ios::out);
    cout << file.tellp() << endl;

    file << "hello world";
    cout << file.tellp() << endl;

    file.seekp(-5, ios::end);
    cout << file.tellp() << endl;

    file << "Sohan" << endl;
    file.seekp(0, ios::beg);

    file << "HELLO";
    file.close();

    ifstream r;
    r.open("Today.txt", ios::in);
    char ch;
    while (!r.eof())
    {
        ch = r.get();
        cout << ch;
    }
    r.close();
}