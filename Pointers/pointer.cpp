#include <iostream> 
using namespace std; 

int main (){
    string food = "Pizza"; //a string variable
    string* ptr = &food; //a pointer variable that store the address 

    cout << food << endl; //Output that value of food

    cout << &food << endl; //output the memory address of food 

    cout << ptr << endl; //output the memory address of food with the pointer
  
    return 0;  
}