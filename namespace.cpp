#include<iostream>
using namespace std;
namespace first
{
    int a=10;
}
namespace second
{
    int b=0;
}
int main()
{
    cout<<"a="<<first::a<<"b="<<second::b<<endl;
    return 0;
}