
// 3. **Constructor Overloading**
//    Create a class `Box` with attributes `length`, `width`, and `height`. Overload constructors to:
//    - Initialize with no arguments (default constructor).
//    - Initialize with one argument (length = width = height).
//    - Initialize with three arguments for all dimensions.
#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // initializing no argument constructor

    Box() : length(0), width(0), height(0)
    {
        cout << "Default constructor initialize" << endl;
    }

    // initializing one argument constructor
    Box(int x) : length(x), width(x), height(x)
    {
        cout << "One argument constructor initialize" << endl;
    }
    // initializing three argument const
    Box(int x, int y, int z) : length(x), width(y), height(z)
    {
        cout << "three argument constructor initialize" << endl;
    }

    void display()
    {
        cout << "Box length is " << length << " width is " << width << " height is " << height << endl;
    }
};
int main()
{
    Box b1;
    Box b2(10);
    Box b3(10, 20, 30);
    b1.display();
    b2.display();
    b3.display();
}
