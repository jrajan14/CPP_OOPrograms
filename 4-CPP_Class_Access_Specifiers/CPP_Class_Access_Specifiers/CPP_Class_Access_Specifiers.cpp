/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Class Access Specifiers in C++
*/

#include <iostream>

using namespace std;

class House
{
    public:
        int LivingRoom = 1; //Directly accessable
    private:
        int BathRoom = 4; //Not Accessable directly
    protected:
        int Basement = 3; //Not Accessable directly
};

int main()
{
    cout << "C++ Class Access Specifiers\n";

    House yourHouse;

    //Can access Public part
    cout << "\nYour house has " << yourHouse.LivingRoom << " Living room";
    
    //Cannot access Private part (Try executing below code)
    //cout << "\nYour house has " << yourHouse.Bathroom << " Bathrooms";                  
    
    //Cannot access Protected part (Try executing below code)
    //cout << "\nYour house has " << yourHouse.Basement << " parts in Basement"
}
