#include<iostream>
using namespace std;
class Box
{
    double length;
    double breadth;
    double height;
    public:
    void setlength(double l);
    void setbreadth(double b);
    void setheight(double h);

    double getlength();
    double getbreadth();
    double getheight();
    double getvolume();
};
double Box::getvolume()
{
    return(length*breadth*height);
}
void Box::setlength(double l)
{
    length=l;
}

void Box::setbreadth(double b)
{
    breadth=b;
}

void Box::setheight(double h)
{
    height=h;
}

double Box::getlength()
{
    return length;
}

double Box::getbreadth()
{
    return breadth;
}

double Box::getheight()
{
    return height;
}

int main()
{
    Box b;
    b.setlength(5);
    b.setbreadth(4);
    b.setheight(3);
    cout<<"length="<<b.getlength()<<"\tbreadth="<<b.getbreadth()<<"\theight="<<b.getheight()<<endl;
    cout<<"\n\t\t\tvolume="<<b.getvolume()<<endl;
    return 0;
}