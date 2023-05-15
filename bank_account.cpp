#include <iostream>
using namespace std;

class Account
{
    int acc_no;
    float balance;
    static float min_balance;

public:
    void read()
    {
        cout << "Enter acc_no and balance: " << endl;
        cin >> acc_no >> balance;
    }

    void display() const
    {
        cout << "Account number: " << acc_no << endl;
        cout << "Your balance: " << balance << endl;
    }

    static void display_min_balance()
    {
        cout << "Your min_balance: " << min_balance << endl;
    }
};

float Account::min_balance = 0.0f;

int main()
{
    Account Acc[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        Acc[i].read();
        Acc[i].display();

        Account::display_min_balance();
    }
    return 0;
}
