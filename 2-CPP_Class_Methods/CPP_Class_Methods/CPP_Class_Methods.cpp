/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Class Methods / Functions in C++
*/

#include <iostream>

using namespace std;

class Calculator
{
    public:

        // A class method is basically a class function. 
        int addition(int numA, int numB)
        {
            return numA + numB;
        }

        int subtraction(int numA, int numB)
        {
            return numA - numB;
        }

};

int main()
{
    cout << "C++ Class medhods / Functions\n";
    
    //Class Object
    Calculator Calc;

    cout << "Addition Example    " << Calc.addition(3, 4) << "\n";
    cout << "Subtraction Example " << Calc.subtraction(4, 3) << "\n";
    
    //Another class object
    Calculator culator;

    cout << "Addition Example    " << culator.addition(3, 4) << "\n";
    cout << "Subtraction Example " << culator.subtraction(4, 3) << "\n";

}
