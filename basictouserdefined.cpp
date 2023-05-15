#include <iostream>
using namespace std;
class Sample
{
    int hour;
    float minutes;

public:
    Sample()
    {
        hour = 0;
        minutes = 0;
    }
    Sample(int t)
    {
        hour = t / 60;
        minutes = t % 60;
    }
    void show()
    {
        cout << "Hour=" << hour << endl
             << "Minutes=" << minutes;
    }
};
int main()
{
    Sample s;
    int x = 120;
    s = x;
    s.show();
    return 0;
}
