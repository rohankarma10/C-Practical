//c++ code to understand binary operator overloading//
#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    public:
    Complex();
    Complex(int,int);
    void display();
    Complex operator +(const Complex &obj);
};
Complex::Complex():real(0),img(0){

}
Complex::Complex(int r, int i):real(r),img(i)
{

}
void Complex::display()
{
    if(img>0)
    cout<<real<<"+"<<img<<"i"<<endl;
    else
    cout<<real<<img<<"i"<<endl;
}
Complex Complex::operator +(const Complex &obj)
{
    Complex temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
}
int main()
{
    Complex a(2,3), b(4,-5),c;
    a.display();
    b.display();
    c=a+b;
    c.display();
    return 0;
}
