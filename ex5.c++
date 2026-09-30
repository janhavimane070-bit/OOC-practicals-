 #include <iostream>
using namespace std;

class Area
{
public:
    
    void area(float side)
    {
        cout << "Area of Square = " << side * side << endl;
    }

  
    void area(float length, float width)
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }

    
    void area(double radius)
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area a;

    float side, length, width;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;
    a.area(side);

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    a.area(length, width);

    cout << "Enter radius of circle: ";
    cin >> radius;
    a.area(radius);

    return 0;
}                                                                                                                                                                       
