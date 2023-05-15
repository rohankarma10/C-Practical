// Polymorphism is a feature of OOP that allows the object to behave differently in different condition. In c++, we have two types of polymorphism:
// 1. compile time : also called static or early binding(Function overloading & operator overloading)
// 2. runtime: also called dynamic or late binding(Function overriding)

// Polymorphism is a very important feature of object oriented programming.

// Real-life example of polymorphism:
// A person at the same time can have different characteristics. Like a man at the same time is a father, a husband and an employee. So a person possess a different behavior at different situations. This is called polymorphism.

// Function overriding : When a child class declares a method which is already present in a parent class then it is called function overriding.Here child class overrides a parent class.

// 1. Compile time polymorphism:
// void add(int x, int y)
// {
//     body;
// }
// void add(int x, float y)
// {
//     body;
// }

// 2. Runtime polymorphism:
// void add()//base class
// {}
// void add()//derived class