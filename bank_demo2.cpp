#include<iostream>
#include<string>
using namespace std;
class Bank
{
    string customer_name;
    double balance;

    public:
    Bank(string,double);
    void withdraw(double);
    void display();

};
Bank::Bank(string name, double bal)
{
    customer_name=name;
    balance= bal;
}
void Bank::withdraw(double amt)
{
    if(amt>balance)
    {
        cout<<"Insufficient Balance!!!"<<endl;
    }
    else
    {
        cout<<amt<<"\tSuccessfully withdrawn"<<endl;
        balance=balance-amt;
    }

}
void Bank::display()
{
    cout<<"Customer Details:"<<endl;
    cout<<"Name:"<<customer_name<<endl;
    cout<<"Balance Amount:"<<balance<<endl;
}
int main()
{
    Bank b("Rohan",1000000), c("Sandesh",1000000);
    b.display();
    c.display();
    b.withdraw(1000);
    c.withdraw(100000000);
}