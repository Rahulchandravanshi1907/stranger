//Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance) 
#include <iostream>
using namespace std;

// aprent class: Person
class Person {
	public:
    string name;
    int age;

    // Member function 
    PersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    displayP() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// (inherits from Person)
class Student : public Person {
	public:
    float percentage;

    // Member function
    StudentData() {
    	PersonData();  // Calling parent class function
        cout << "Enter percentage: ";
        cin >> percentage;
    }
   	displayS() {
   		displayP(); //calling
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

//(inherits from Person)
class Teacher : public Person {
	public:
    float salary;

    // Member function
    TeacherData() {
    	PersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    displayT() {
    	displayP(); 
        cout << "Salary: " << salary << endl;
    }
};

// Main function
main() {
    Student s;
    Teacher t;

    // Input and display data for student
    cout << "Enter details for student:" << endl;
    s.StudentData();
    cout << "\nStudent Details:" << endl;
    s.displayS();

    // Input and display data for teacher
    cout << "\nEnter details for teacher:" << endl;
    t.TeacherData();
    cout << "\nTeacher Details:" << endl;
    t.displayT();

}

