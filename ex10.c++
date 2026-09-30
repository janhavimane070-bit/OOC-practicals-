#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;

    
    ofstream outfile("student.txt");

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    outfile << name << endl;
    outfile << age << endl;

    outfile.close();

    
    ifstream infile("student.txt");

    infile >> name;
    infile >> age;

    cout << "\nData read from file:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    infile.close();

    return 0;
}
