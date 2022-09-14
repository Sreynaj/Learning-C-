#include <iostream>
using namespace std; 

class MyClass{ //the class
    public: // access specifier
       void myMethod(); //method function declaretion
};

//method/fucntion definition outside the class 

void MyClass::myMethod(){
    cout <<"Hello World";
}

int main(){
    MyClass myObj; //Create an object of MyClass

    myObj.myMethod(); //call the method

    return 0;
}