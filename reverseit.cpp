#include <iostream>
#include <cstring>
using namespace std;

void reverseit(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    cout << s << endl;
}
int main()
{
    char st[100];
    cout << "Enter any string:";
    cin.getline(st, 100);
    reverseit(st);
    return 0;
}