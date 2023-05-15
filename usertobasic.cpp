#include <iostream>
using namespace std;
class Sample
{
    int hour, minutes;

public:
    Sample(int h, int m)
    {
        hour = h;
        minutes = m;
    }
    operator int()
    {
        return hour * 60 + minutes;
    }
};
int main()
{
    int h, m, duration;
    h = 2;
    m = 60;
    Sample s(h, m);
    duration = s;
    cout << duration;
}
