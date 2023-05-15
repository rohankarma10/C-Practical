//basic to user-defined data types
#include<iostream>
using namespace std;
class Distance
{
    int centimeter;
    float meter;
    public:
    Distance():meter(-1),centimeter(-1){}
    Distance(float cm):centimeter(cm)
    {
       meter = static_cast<float>(centimeter/100.0);

    }
    void display()
    {
        cout<<centimeter<<"cm = "<<meter<<"m."<<endl;
    }
};
int main()
{
    Distance d(1025.0);
    d.display();
    return 0;
}