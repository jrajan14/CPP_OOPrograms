/*
C++ Object Oriented Programs
By J RAJAN
For Learners
Title: Encalsulation in C++ Class
*/

#include <iostream>

using namespace std;

class City
{
    private:
        int speedLimit = 70; //private variable

    public:
        // Getter method      To read from Primaet variable
        int checkSpeedLimit()
        {
            return speedLimit;
        }

        //Setter Method       To modify value of private variable
        void changeSpeedLimit(int newSpeed)
        {
            speedLimit = newSpeed;
        }
;
};

int main()
{
    cout << "Encapsulation in C++ Class\n";

    City London; //Object created
    cout << "\nSpeed Limit in London = " << London.checkSpeedLimit(); //Private variable accessed via Getter method

    cout << "\nSpeed limit changing";
    London.changeSpeedLimit(90); //Private variable edited via Setter method
    cout << "\nSpeed Limit in London = " << London.checkSpeedLimit();  //Private variable now shows new value

}
