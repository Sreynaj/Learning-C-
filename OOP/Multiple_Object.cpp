#include <iostream> 
#include <string> 
using namespace std; 

//declare a structure named "Car"
struct Car{
    string brand;
    string model;
    int year;   
};
int main(){
    //create a Car structure and stor it in myCar1
    Car carObj1; 
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    //create a Car structure and store it in myCar2
    Car carObj2; 
    carObj2.brand = "Ford";
    carObj2.model = "Raptor"; 
    carObj2.year = 1969; 

    //print the structure members 
    cout << carObj1.brand <<" " << carObj1.model<< " " << carObj1.year<< endl; 
    cout << carObj2.brand <<" " << carObj2.model<< " " << carObj2.year<< endl; 

}