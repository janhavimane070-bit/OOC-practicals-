#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "Constructor called." << endl;
    }

    
    float area()
    {
        return length * width;
    }

    
    float perimeter()
    {
        return 2 * (length + width);
    }

    
    ~Rectangle()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    Rectangle r(l, w);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
