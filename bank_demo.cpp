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
void Bank::deposit(double amt)
{
    balance+=amt;
    cout<<balance<<"Successfully deposited"<<endl;

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
int main()
{
    Bank b("Rohan",0.0);
    int choice=1;
    do
    {
        cout<<"PRESS 1::DEPOSIT 2::WITHDRAW 3:: INFO"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter amount to be deposited:"<<endl;
            cin>>amt;
            b.deposit(amt);
            break;
        }
    }
}