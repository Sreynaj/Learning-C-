#include <iostream>
#include <string> 
using namespace std; 

struct Car{
        string brand;
        string model;
        int year;
    };   

int main(){
    // Create a car structure and store it in myCar1;
    Car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Create another car structure and store it in myCar2;
    Car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Raptor";
    myCar2.year = 1969;

    //print the structure members 

    cout << myCar1.brand << " | " << myCar1.model<< " | "<< myCar1.year<< endl;
    cout << myCar2.brand << " | " << myCar2.model << " | " << myCar2.year<< endl;

    return 0;
}