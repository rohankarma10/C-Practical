//c++ program to convert user defined data to basic
#include<iostream>
using namespace std;
class Converter
{
    float kilogram;
    public:
    Converter(float k):kilogram(k){}
    operator int()
    {
        int gram;
        gram=static_cast<int>(kilogram*1000);
        return gram;
    }
};

int main()
{
    Converter c(1);
    int gm = c;
    cout<<gm<<endl;
}