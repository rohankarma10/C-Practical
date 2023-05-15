// Inheritance or derivation is a process of creating new classes called derived class from existing class called base classes.The derived class can inherit all the properties from the base class and can add its own properties as well.Simply inheritance means one class can inherit other class and one class can access the property of other class.It uses the concept of code reusabilty.The inherited property may be hidden(if private in base class) and visible(if public or protected in base class) in derived class.Reusing the existing code saves time and money an also increases program's reliability.
// Types of inheritance:
// 1. Single
// 2. Multiple
// 3. Multilevel
// 4. Hierarchial
//     (Hybrid or virtual)

// 1. Single(1 Base class, 1 Derived class): In single inheritance, one class is allowed to inherit from only one base class ie. one sub class is inherited by one base class only.
//    Syntax:
//    class subclass_name:access_mode base_class)
// {
//     body of subclass;
// }

// 2. Multiple(one or more base class, 1 Derived class) : In multiple inheritance, one sub - class can inherit from more than one base class.i.e one sub class is inherited from one or more base classes.
// Syntax : class subclass_name : access_mode base_class1, access_mode base_class2
// {
//     body of subclass;
// }

// 3. Multilevel : In this inheritance,
//                 a derived class is created from another derived class.Base_class(1) |
//                     Base_class(2) |
//                     Derived

//                     4. Hierarchial : In this inheritance,
//                 one or more sub class is inherited from a single base class.i.e one or more derived class are created from a only one base class.Base class / Derived class Derived class

//                                                                                                                                                               Hybrid : This inheritance is implemented by combining more than one type of inheritance.For eg,
//                 combining hierarchial and mutiple inheritance as shown below :

//     class A class R
//     /\        \ |
//                     class B class C class A

#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "Hi...I'm base class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "Hello...I'm derived class" << endl;
    }
};
int main()
{
    A *p;
    B ob;
    p = &ob;
    p->show();
    return 0;
}