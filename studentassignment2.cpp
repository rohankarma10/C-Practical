#include <iostream>
using namespace std;
class Student
{
public:
  string name;
  int marks[5];
  float percentage;

  Student(string n, int marks[5])
  {
    name=n;
    for(int i=0;i<5;i++)
        {
          marks[i]=marks[i];
    }
    percentage=0;
    for(int i=0;i<5;i++)
    {
      percentage += marks[i];
    }
    percentage=percentage/5;
  }
};
void compare(Student s1, Student s2)//object as a function.
{
  if(s1.percentage>s2.percentage)
    {
      cout<<s1.name<<" has a higher percentage than "<<s2.name<<endl;
  }
  else
    {
      cout<<s2.name<<" has a higher percentage than "<<s1.name<<endl;
    }
}
int main()
{
  cout<<"Enter the name of the first student:";
  string name1;
  cin>>name1;

  cout<<"Enter the marks for the first student:";
  int marks1[5];
  for(int i=0;i<5;i++)
    {
      cin>>marks1[i];
    }
  Student s1(name1,marks1);
  cout<<"Enter the name of the second student:";
  string name2;
  cin>>name2;

  cout<<"Enter the marks for the second student: ";
  int marks2[5];
  for(int i=0;i<5;i++)
    {
      cin>>marks2[i];
    }
Student s2(name2,marks2);
compare(s1,s2);
return 0;
}

