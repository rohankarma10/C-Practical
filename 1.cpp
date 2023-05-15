a /*write your own methos for the problem
              student
            -nanme:string
            -age:int
            -address:string
            -marks:double[5]

            --------------------------------------
            name      age     adresss    %score
            ---       ----     ------     98
            ---       ----     ------     98
            ---       ----     ------     98
            ---       ----     ------     98
            ---       ----     ------     98
            -----------------------------------*/
#include <iostream>
#include <fstream>
#include <string>

    using namespace std;

class Student
{
private:
    string name;
    int age;
    string address;
    double marks[5];

public:
    // Constructor
    Student(string name, int age, string address, double marks[])
    {
        this->name = name;
        this->age = age;
        this->address = address;
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    // Method to calculate the percentage score
    double percentage()
    {
        double total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return (total / 5.0);
    }

    // Method to write the student information to a file
    void writeToFile(ofstream &file)
    {
        file << name << "\t" << age << "\t" << address << "\t" << percentage() << endl;
    }
};

int main()
{
    // Create an array of students
    Student students[5] = {
        Student("John Doe\t\t", 18, "123 Main St\t\t", new double[5]{90, 85, 95, 80, 90}),
        Student("Jane Doe\t\t", 19, "456 Elm St\t\t", new double[5]{95, 90, 85, 90, 95}),
        Student("Bob Smith\t\t", 20, "789 Oak St\t\t", new double[5]{80, 85, 90, 85, 80}),
        Student("Alice Johnson\t", 18, "234 Pine St\t\t", new double[5]{85, 90, 95, 90, 85}),
        Student("Tom Wilson\t\t", 19, "567 Maple St\t", new double[5]{95, 80, 85, 90, 95})};

    // Open the result file for writing
    ofstream resultFile("result.txt");

    // Write the table header to the file
    resultFile << "Name\t\t\tAge\t\t\tAddress\t\t\t% Score" << endl;
    resultFile << "-----------------------------------------------------------------" << endl;

    // Write the student information to the file
    for (int i = 0; i < 5; i++)
    {
        students[i].writeToFile(resultFile);
    }

    // Write the table footer to the file
    resultFile << "--------------------------------------------------------------" << endl;

    // Close the result file
    resultFile.close();

    return 0;
}