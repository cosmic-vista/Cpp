// 4. **Copy Constructor**
//    Create a class `Point` with attributes `x` and `y` representing coordinates. Use a copy constructor to create a copy of a `Point` object.
#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    // paramterized constructor

    Point(int a, int b) : x(a), y(b) {}

    // copy constructor
    // Point(const Point &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }
    // or
    Point(const Point &obj) : x(obj.x), y(obj.y)
    {
        cout << "Copy const is called" << endl;
    }

    void display()
    {
        cout << "X coordinate is " << x << " Y coordinate is " << y << "./n";
    }
};

int main()
{
    Point p(10, 20);
    Point q = p;
    q.display();
}