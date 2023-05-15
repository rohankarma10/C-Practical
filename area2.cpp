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
    shape ob;
    ob.length=10;
    ob.breadth=10;
    cout<<"length="<<ob.length<<endl;
    cout<<"breadth="<<ob.breadth<<endl;
    cout<<"area="<<ob.area()<<endl;
    return 0;
}