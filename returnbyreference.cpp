#include<iostream>
using namespace std;
int a;
int & test_ref()
{
    return a;
}
int main()
{
    test_ref()=10;
    cout<<"a="<<a<<ends;
}