#include <iostream>
using namespace std;
class Counter
{
    int count;

public:
    Counter() : count(0) {}

    Counter operator++()
    {
        ++count;
        Counter temp;
        temp.count = count;
        return temp;
    }
    Counter operator++(int)
    {
        Counter temp;
        temp.count = count;
        ++count;
        return temp;
    }
    void display()
    {
        cout << "count:" << count;
    }
};

int main()
{
    Counter c1, c2;
    c1.display();
    c2.display();

    ++c1;
    c1.display();

    c2++;
    c2.display();
}