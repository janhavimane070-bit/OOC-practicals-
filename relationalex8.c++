
#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    // Relational > operator
    bool operator>(Number n)
    {
        return x > n.x;
    }
};

int main()
{
    Number n1(20), n2(10);

    if (n1 > n2)
        cout << "First number is greater than second number." << endl;
    else
        cout << "First number is not greater than second number." << endl;

    return 0;
}
