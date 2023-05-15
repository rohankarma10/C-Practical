//cpp program to understand the concept of class and objects//access specifier(private,protected,public)
#include<iostream>
using namespace std;
class box
{
    public:
    double length;
    double breadth;
    double height;
    double volume()
    {
        return(length*breadth*height);
    }
};
int main()
{
    box ob; //object is created
    ob.length=5;
    ob.breadth=4;
    ob.height=7;
    cout<<"length="<<ob.length<<endl;
    cout<<"breadth="<<ob.breadth<<endl;
    cout<<"height="<<ob.height<<endl;
    cout<<"volume="<<ob.volume()<<endl;
    return 0;
}