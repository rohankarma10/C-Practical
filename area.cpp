//cpp program to understand the concept of class and objects//access specifier(private,protected,public)
#include<iostream>
using namespace std;
class shape
{
    public:
    double length;
    double breadth;
    double area()
    {
        return(length*breadth);
    }
};
int main()
{
    shape ob; //object is created
    ob.length=5;
    ob.breadth=4;
    cout<<"length="<<ob.length<<endl;
    cout<<"breadth="<<ob.breadth<<endl;
    cout<<"area="<<ob.area()<<endl;
    return 0;
}