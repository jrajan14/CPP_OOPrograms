/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Class Constructor and Destructor in C++
*/

#include <iostream>

using namespace std;

class Car
{
    public:
        float speed = 0.00;

        //Constructor method (Can be parametrized)
        Car()
        {
            cout << "\nObject Created"; //This executes automatically whenever an object of this class is created
        }

        //Destructor method (Cannot be parametrized, nor can have return values)
        ~Car()
        {
            cout << "\nObject Destroyed"; //This executes automaticaly whenever the objects are destroyed. Usually at program termination.
        }

};

int main()
{
    std::cout << "C++ Constructor & Destructor\n";

    //First object created
    Car myCar;
    myCar.speed = 143.3;
    cout << "\nMy Car's Speed is : " << myCar.speed;

    //Second Object cerated
    Car yourCar;
    yourCar.speed = 420.96;
    cout << "\nYour Car's Speed is : " << yourCar.speed;

    //Both objects will be destroyed now as the program is terminated

}
