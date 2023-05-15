//default argument
#include<iostream>
using namespace std;
int sum(int a=2,int b=3)
{
    return(a+b);
}
int main()
{
    cout<<"sum of two numbers is:"<<sum(7)<<ends;
    return 0;
}