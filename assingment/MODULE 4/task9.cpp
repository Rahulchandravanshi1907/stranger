//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class Matrix {
    int arr[5];  // array
	public:
   	input() {
   		int i;
        cout << "Enter 5 elements of the matrix: ";
        for (i = 0; i < 5; i++) {
            cin>>arr[i];
        }
    }
    //+ operator to add two matrices
    Matrix operator+(Matrix &m) {
    	int i;
        Matrix result;  // Object to store the result
        for (i=0; i<5; i++) {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }

    // Function to display the matrix
    display() {
    	int i;
        cout << "Matrix: ";
        for (i=0; i<5; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

main() {
    Matrix m1, m2, m3;
    cout<<"Enter elements for the first matrix: "<<endl;
    m1.input();
    cout<<"Enter elements for the second matrix: "<<endl;
    m2.input();
    m3 = m1 + m2;	// Adding the two matrices using the overloaded + operator
    cout<<"Result: "<<endl;	// Display the result
    m3.display();

}

