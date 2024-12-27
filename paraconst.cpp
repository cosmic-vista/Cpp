//                                   **Parameterized Constructor**
//    Create a class `Car` with attributes `brand`, `model`, and `price`. Use a parameterized constructor to initialize these attributes, and write a function to display the car details.
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int price;

public:
    // creating deafult constructor method 1
    Car(string b, string m, int p) : brand(b), model(m), price(p) {};

    // creating deafult constructor method 2

    // Car(string b, string m, int p)
    // {
    //     brand = b;
    //     model = m;
    //     price = p;
    // }

    void display()
    {
        cout << " Car Brand is " << brand << " model is " << model << " price is ->" << price << endl;
    }
};
int main()
{
    Car c("BMW", "M1", 55000);
    c.display();
}
