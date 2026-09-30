#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
    }
};

class Exam : public Student
{
protected:
    int marks1, marks2;

public:
    void getMarks()
    {
        cout << "Enter marks of Subject 1: ";
        cin >> marks1;
        cout << "Enter marks of Subject 2: ";
        cin >> marks2;
    }

    void displayMarks()
    {
        cout << "\nSubject 1 Marks: " << marks1;
        cout << "\nSubject 2 Marks: " << marks2;
    }
};

class Result : public Exam
{
private:
    int total;
    float percentage;

public:
    void calculate()
    {
        total = marks1 + marks2;
        percentage = total / 2.0;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}
