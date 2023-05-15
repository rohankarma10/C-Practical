#include<iostream>
using namespace std;
class Box
{
    double length;
    double breadth;
    double height;
    public:
    Box()
    {
        cout<<"constructor get called"<<endl;
    }
    box(double l, double b, double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double getvolume();
};
double Box::getvolume()
{
    return(length*breadth*height);
}
int main()
{
    Box b;
    b.box(5,4,3);
    cout<<"volume="<<b.getvolume()<<endl;
    return 0;
}