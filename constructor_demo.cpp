//c++ code to understand the concept of constructor
#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle();//default constructor
    Rectangle(int, int);//parametrized constructor
    int area();
    Rectangle compare(Rectangle o1, Rectangle o2)
    {
        if(o1.area()>o2.area())
        return o1;
        else
        return o2;
    }
    //copy constructor
    Rectangle( const Rectangle &obj)
    {
        length=obj.length;
        breadth=obj.breadth;
    }
};

int Rectangle::area()
{
    return(length*breadth);
}
Rectangle::Rectangle()
{
    length=10;
    breadth=5;
}
Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
int main()
{
    Rectangle ob1,ob2(5,2),ob4(10,3);
    cout<<"Area="<<ob1.area()<<endl;
    cout<<"Area="<<ob2.area()<<endl;
    Rectangle ob3=ob2;//calling copy constructor
    cout<<"Area="<<ob3.area()<<endl;
    Rectangle temp=ob2.compare(ob2,ob4);
    cout<<"Largest area is:"<<temp.area()<<endl;
    return 0;
}
    