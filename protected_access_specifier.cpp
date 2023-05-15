// Protected access specifier is similar to private access specifier in the sense that it can't be accessed outside of its class unless with the help of friend class.
// The difference is that the class members declared as protected can be accessed by any subclass(derived class)of that class as well.

#include <iostream>
using namespace std;

class Sample
{
protected:
    int age;
};
class SampleChild : public Sample
{
public:
    void displayAge(int a)
    {
        age = a;
        cout << "Age=" << a;
    }
};
int main()
{
    int inputAge;
    SampleChild child;
    cout << "Enter your age:";
    cin >> inputAge;
    child.displayAge(inputAge);
    return 0;
}