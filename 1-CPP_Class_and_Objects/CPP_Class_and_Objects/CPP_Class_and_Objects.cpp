/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Class and Objects in C++
*/

#include <iostream>

using namespace std;

//Class declaration and Definition
class Car
{
    //Public part of the class
    public:            
        int modelNo;
        string name;
        bool isManual;
        float engVolume;
        string trasmission;
};

int main()
{
    cout << "C++ Class and Objects\n";

    // Making objects using the class
    Car BMW;
    Car Audi;
    Car AMartin;
    Car Porsche;
    
    // Adding properties
    BMW.modelNo = 3579;
    Audi.modelNo = 6789;
    AMartin.modelNo = 007;
    Porsche.modelNo = 911;

    BMW.name = "X3";
    Audi.name = "R8";
    AMartin.name = "Vantage";
    Porsche.name = "Carrera";

    BMW.isManual = true;
    Audi.isManual = false;
    AMartin.isManual = true;
    Porsche.isManual = false;

    BMW.engVolume = 2.3;
    Audi.engVolume = 5.2;
    AMartin.engVolume = 5.2;
    Porsche.engVolume = 3.7;

    // Conditional properties using class elements 
    if (BMW.isManual)
    {
        BMW.trasmission = "Manual";
       
    }
    else
    {
        BMW.trasmission = "Automatic";
    }

    // Usage (sample)
    cout << "\nBMW "<< BMW.name << " with Model No. " << BMW.modelNo << " that has a " << BMW.trasmission << " Transmission, also has an engine capacity of " << BMW.engVolume  << " Litres\n";
    cout << "\nAudi " << Audi.name << " with Model No. " << Audi.modelNo << " that has an engine capacity of " << Audi.engVolume << " Litres\n";
    cout << "\nAston Martin  " << AMartin.name << " with Model No. " << AMartin.modelNo << " that has an engine capacity of " << AMartin.engVolume << " Litres\n";
    cout << "\nPorsche  " << Porsche.name << " with Model No. " << Porsche.modelNo << " that has an engine capacity of " << Porsche.engVolume << " Litres\n";

}

