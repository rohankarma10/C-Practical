#include <iostream>
using namespace std;
class Student
{
public:
  string name;
  int marks[5];
  float percentage;

  Student(string n, int m[5])
  {
    name=n;
    for(int i=0;i<5;i++)
    {
      marks[i]=m[i];
    }
    percentage=0;
    for (int i=0;i<5;i++)
    {
      percentage += marks[i];
    }
    percentage = percentage/5;
  }
};
void compare(Student s1, Student s2)
{
  if (s1.percentage > s2.percentage)
  {
    cout<<s1.name<< " has a higher percentage than "<<s2.name<<endl;
  } else
  {
    cout<<s2.name<< " has a higher percentage than "<<s1.name<<endl;
  }
}
int main()
{
  int marks1[5]={75,80,85,90,95};
  Student s1("Rohan",marks1);
  int marks2[5]={80,85,90,95,100};
  Student s2("Jennie",marks2);
  compare(s1,s2);
  return 0;
}

