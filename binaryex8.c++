
#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a = 0)
    {
        x = a;
    }

    // Binary + operator
    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3;

    n3 = n1 + n2;

    cout << "Addition of two numbers:" << endl;
    n3.display();

    return 0;
}
