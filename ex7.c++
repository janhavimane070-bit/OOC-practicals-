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
};


class Marks : public Student
{
protected:
    float marks;

public:
    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};


class Result : public Marks
{
public:
    void display()
    {
        cout << "\n----- Student Result -----" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.display();

    return 0;
}
