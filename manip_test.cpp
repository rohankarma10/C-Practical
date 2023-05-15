#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<hex<<10<<endl;
    cout<<setbase(16)<<10<<endl;
    cout<<setw(20)<<"Hello world"<<endl;
}