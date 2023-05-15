// Type conversion is the process that converts the predefined data type of one variable into an appropriate data type. The main idea behind the type conversion is to convert the two different data type variables into single data type to solve mathematical and logical operations easily without data loss.
// Type conversion can be done in two ways in C++, one is Implicit type conversion and second is Explicit type conversion.

// 1. Implicit type conversion:
// - THe type of conversion which is done automatically by the compiler without any human effort.
// -It means IMplicit conversion automatically converts one data into another type based on some predefined rules of C++ compiler.
// - It is also known as "Automatic type conversion".
// - THe correct order of data types from lower rank to higher rank is:
//   bool->char->short int-> int-> unsigned int-> long int-> unsigned long int-> long long int-> float-> double-> long double

// Example:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 20;
//     short int y = 5;
//     int z = x + y;
//     cout << "z=" << (x + y) << endl;
//     return 0;
// }

// Example:
// #include <iostream>
// using namespace std;

// class Distance
// {
//     int meter;
//     float centimeter;

// public:
//     Distance(int m, int c)
//     {
//         meter = m;
//         centimeter = c;
//     }
//     int getMeter()
//     {
//         return meter;
//     }
//     float getCentimeter()
//     {
//         return centimeter;
//     }
// };
// class Dist
// {
//     int feet;
//     int inch;

// public:
//     Dist()
//     {
//         feet = 0;
//         inch = 0;
//     }
//     Dist(int f, int i)
//     {
//         feet = f;
//         inch = i;
//     }
//     Dist(Distance d)
//     {
//         float m, c;
//         m = d.getMeter();
//         c = d.getCentimeter();
//         feet = m * 3.3;
//         inch = c * 0.3;
//         feet = feet + inch / 12;
//         inch = inch % 12;
//     }
//     void display()
//     {
//         cout << "Feet=" << feet << endl
//              << "Inch=" << inch;
//     }
// };
// int main()
// {
//     Distance d1(6, 40);
//     Dist d2 = d1;
//     d2 = d1;
//     d2.display();
// }

// Output:
// Feet=20
// Inch=4