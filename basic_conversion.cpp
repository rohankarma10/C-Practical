#include<iostream>
using namespace std;
int main()
{
    int a=10,x;
    double b=20.45,c;
    cout<<"a="<<a<<" b="<<b<<endl;
    c=a;
    cout<<"a= "<<a<<" c="<<c<<endl;
    x=b;
    cout<<"b= "<<b<<" x="<<x<<endl;
    //explicit type casting
    
    x=(int)b;//c style type casting
    cout<<"b= "<<b<<" x="<<x<<endl;

    x=int(b);//function style casting
    cout<<"b= "<<b<<" x="<<x<<endl;

    x=static_cast<int>(b);
    cout<<"b= "<<b<<" x="<<x<<endl;
    return 0;
}