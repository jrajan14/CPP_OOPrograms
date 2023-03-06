/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Polymorphism in C++ Class
*/

#include <iostream>

using namespace std;

class Creature
{
    public:
        void Poly()
        {
            cout << "\nThis is from Creature Class";
        }
};

class Animal :public Creature
{
    public:
        void Poly() //Same name as of the function in parent class
        {
            cout << "\nThis is from Animal Class";
        }
};

class Human :public Animal
{
    public:
        void Poly() //Same name as of the function in parent class
        {
            cout << "\nThis is from Human class";
        }
};

int main()
{
    cout << "Polymorphism in C++ class";

    Creature Cre;
    Cre.Poly();

    //Same function behaves differently
    Animal Anim;
    Anim.Poly();

    //Same function behaves differently again
    Human Hum;
    Hum.Poly();

    //The child overrides the parent's function
}
