#include<iostream>
using namespace std;
class shape
{
    public:
    double length;
    double breadth;
    double height;
    double getarea()
    {
        return(length*breadth);
    }
    double getvolume()
    {
         return(length*breadth*height);
    }
    void dimension()
    {
        cout<<length<<"*"<<breadth<<"*"<<height;
    }
};

int main()
{
    shape ob; //object is created
    ob.length=5;
    ob.breadth=4;
    ob.height=7;
    cout<<"area="<<ob.getarea()<<endl;
    cout<<"volume="<<ob.getvolume()<<endl;
    cout<<"dimension=";
    ob.dimension();
    return 0;
}