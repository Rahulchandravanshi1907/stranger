 //Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance)  
#include <iostream>
using namespace std;
class Cricketer {
public:
    string name;
	int matches;  
};

// Batsman (inherits from Cricketer)
class Batsman:public Cricketer {
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Function to input data
    inputData() {
        cout << "Enter the name of the batsman: ";
        cin >> name;
        cout << "Enter the number of matches played: ";
        cin >> matches;
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs
    calculateAverage() {
        if (matches != 0) {
            averageRuns = totalRuns/ matches;
        } else {
            averageRuns = 0;
        }
    }

    // Function to display data
   	displayData() {
        cout << "\nBatsman Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

main() {
    // Creating an object
    Batsman b;
    b.inputData();
    b.calculateAverage();
    b.displayData();
}

