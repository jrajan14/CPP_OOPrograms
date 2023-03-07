/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Operator Overloading in C++ Class
*/

#include <iostream>

using namespace std;

class Complex 
{
    private:
        int real, imaginary;

    public:

        //Default Constructor
        Complex() 
        {
        }
    
        //Parametrised Constructor
        Complex(int r, int i) 
        {
            real = r;
            imaginary = i;
        }

        //Overloading '+' operator to add two complex numbers
        Complex operator +(Complex c) 
        {
            Complex temp; //Temporary object of default type
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }

        //Display in imaginary form
        void display() 
        {
            cout << real << "+i" << imaginary << endl;
        }
};

int main() {
    Complex number_1(2, 3);
    Complex number_2(4, 6);
    Complex number_3;

    number_3 = number_1 + number_2;

    number_1.display();
    number_2.display();
    number_3.display();

    return 0;
}
