#include<iostream>
using namespace std;
int main()
{
    int*a=new int[5];
    cout<<"Enter 5 numbers:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
 cout<<"following are the elements of array:"<<endl";
for(i=0;i<5;i++)
cout<<a[i]<<"\t";
cout<<endl;
delete[]a;
    