/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Abstract Class and Virtual Function
*/

#include <iostream>

using namespace std;

//Abstract Class
class Animal 
{
    public:
        //Pure Virtual Functions
        virtual void speak() = 0;
        virtual void move() = 0;
};

//Derived Class 
class Dog : public Animal {
    public:
        void speak()
        {
            cout << "Bark!" << endl;
        }
        void move()
        {
            cout << "Running on four legs." << endl;
        }
};

//Another Derived Class
class Bird : public Animal 
{
    public:
        void speak() 
        {
            cout << "Chirp!" << endl;
        }
        void move() 
        {
            cout << "Flying or hopping." << endl;
        }
};

int main() 
{
    cout << "ABSTRACT CLASS AND VIRTUAL FUNCTION\n";

    //Create derived class objects
    Animal* dog = new Dog();
    Animal* bird = new Bird();

    dog->speak();
    dog->move();

    bird->speak();
    bird->move();

    //Deallocating memory
    delete dog;
    delete bird;

}
