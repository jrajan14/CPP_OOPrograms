/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Inheritance in C++ Class
*/

#include <iostream>

using namespace std;

//Single, Multi level, Multiple, Heirarchical, Hybrid

//Original Class
class Organism
{
    public:
        string Type; 
        string CellWall;
};

class Creature
{
    public:
        int Limbs;
        int Eyes;
        string Habitat;
    
    //See the usage of Protected elements
    protected:
        string Food = "Vegeterian";

};


//Derived Classes
//Single Inheritance
class Animal : public Creature
{
    public :
        string Endurance = "Low";
};

//Multi-Level Inheritance
class Baby : public Animal
{
    public:
        int BoneCount;

        //Class  Constructor. Called everytime a new 'Baby' object is created
        Baby()
        {
            cout << "\n\nInfants of many Creatures have higher bone count";
        }
};

//Multiple Inheritance
class Mythic : public Organism, public Creature  
{
    public :
        string origin;
        string Meal;
        void appetite()
        {
            Meal = Food;
        }

        //Class Constructor
        Mythic()
        {
            cout << "\n\nMythological creatures don't exist in real life.";
        }

        //Class destructor
        ~Mythic()
        {
            cout << "\n\n NOTE: If you ever spot any mythological creatures....STOP DOING DRUGS...\n\n";
        }
};



int main()
{
    cout << "Inhertace in C++\n";
    //normal class object
    Organism Amoeba;
    Amoeba.Type = "Single Cellular";
    Amoeba.CellWall = "No Cell Wall";
    cout << "\nAmoeba is a " << Amoeba.Type << " organism. It has " << Amoeba.CellWall << ".\n";

    //Single Inheritance example
    Animal Human;
    Human.Limbs = 4;
    Human.Eyes = 2;
    Human.Habitat = "Land";
    Human.Endurance = "High";
    cout << "\nHumans have " << Human.Eyes << " eyes, " << Human.Limbs << " limbs, and lives on " << Human.Habitat;
    cout << "\nHumans have " << Human.Endurance << " Edurance";

    //Multi Level Inheritance example
    Baby HumanBaby;
    HumanBaby.Limbs = 4;
    HumanBaby.Eyes = 2;
    HumanBaby.BoneCount = 300;
    cout << "\n\nHuman babies have " << HumanBaby.Limbs << " Limbs, " << HumanBaby.Eyes << " eyes, and has about " << HumanBaby.BoneCount << " Bones.";

    //Multiple Inheritance example
    Mythic Unicorn;
    Unicorn.Limbs = 4;
    Unicorn.Eyes = 2;
    Unicorn.Habitat = "Forest";
    Unicorn.Type = "Imaginary";
    Unicorn.origin = "Europe";
    
    cout << "\n\nA Unicorn is an " << Unicorn.Type << " creature, which originated in " << Unicorn.origin << " and lives mostly in " << Unicorn.Habitat;
    Unicorn.appetite();
    cout << "\nUnicorns mostly eat " << Unicorn.Meal << " stuff";
    
    //A Heirarchical Inheritance is basiclly Multi-Level Inheritance. 
    //It is just a matter of creating heirarchy using Multi-Level Inheritance.
    /*
                             Class_1
                               /\
                              /  \
                       Class_2    Class_3
                       /\              /\
                      /  \            /  \
               Class_4    Class_5    /    \
                                    /      \
                             Class_6       Class_7   
    */


    //Hybrid Inheritance is a mix of Multiple and Multi-Level Inheritance
    /*
                             Class_1
                               /\
                              /  \
                       Class_2    Class_3     --Class_2 and _3 can access from Class_1
                           /\       /
                          /  \     /  
                   Class_4   Class_5          --Class_5 can access from 1,2,3. Class 4 can access from _1 and _2
                                /\
                               /  \
                        Class_6    Class_7    --Class_6 and _7 can access from _1, _2, _3, _5

            You can create any type fo heirarchy you want.     
    
    */

}
