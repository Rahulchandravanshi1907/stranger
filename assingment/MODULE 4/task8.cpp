//Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading 
#include <iostream>
using namespace std;
// addition of two integers
	operate(int a, int b) {	//overloading
    return a + b;
}

// subtraction of two integers
	operate(int a, int b, char o) {	//overloading
    return a - b;
}

// multiplication of two floating-point numbers
	operate(float a, float b) {	//overloading
    return a * b;
}

//division of two doubles
	operate(double a, double b) {	//overloading
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error" << endl;
        return 0;
    }
}

main() {
    cout<<"Addition: "<<operate(10,5)<<endl;
    cout<<"Subtraction: "<<operate(10,5,'-')<<endl;
    cout << "Multiplication: " << operate(3.5f, 2.0f)<<endl;
    cout << "Division: "<<operate(10.0, 2.0)<<endl;
}

