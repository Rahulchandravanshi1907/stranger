//Write a program to concatenate the two strings using Operator Overloading 
//Doubt
#include <iostream>
#include<cstring>
using namespace std;

class String {
    char str[100]; 
	public:
    // Constructor
    String() {
        str[0] = '\0';  //empty string
    }

    //input the string
    input() {
        cout << "Enter a string: ";
        cin >> str;
    }

    // Overloading the + operator to concatenate two strings
    String operator+(String &s) {
        //String result;
        //result.str = str + s.str;  // Concatenate using + operator
        //return result;
        String result;
        strcpy(result.str, str);       
        strcat(result.str, s.str); 
        return result;
    }
   	display() {
        cout<<"Concatenated String: "<<str<<endl;
    }
};

main() {
    String s1,s2,s3;
    cout << "Enter the first string: ";
    s1.input();
    cout << "Enter the second string: " <<endl;
    s2.input();

    // Concatenate the two strings
    s3 = s1 + s2;
	// Display
    s3.display();
}

