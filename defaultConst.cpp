//                                 **Default Constructor**
// Create a class `Person` with attributes `name` and `age`. Use a default constructor to initialize these attributes with some default values and display them.

#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

    // creating default constructor
public:
    Person()
    {
        cout << "Default Constructor initiated" << endl;
        name = "Akash";
        age = 23;
    }
    // creating method
    void print()
    {

        cout << "Default Name " << name << " age->" << age << endl;
    }
};

int main()
{
    Person x;
    x.print();
    return 0;
}