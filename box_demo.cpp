#include<iostream>
using namespace std;
class box
{
    public:
    double length;
    double breadth;
    double height;
    void setDimension(double l, double b, double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    void displayDimension()
    {
        cout<<"length="<<length<<"\tbreadth="<<breadth<<"\theight="<<height<<endl;
    }
};
int main()
{
    box ob;
    ob.setDimension(5,4,3);
    ob.displayDimension();
    return 0;
}