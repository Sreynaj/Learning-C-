#include <iostream>
using namespace std; 

int main(){
    string food = "Pizza"; //variable declaration
    string *ptr = &food; //Pointer declaration

    //Reference: output the memory address of the food with pointer
    cout << ptr << endl; 

    //deference: output the valuse of food with the pointer
    cout <<*ptr <<endl;

    return 0; 
}