// Write a program of to sort the array using templates.  
#include <iostream>
using namespace std;

template <typename T>
void Sort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void print(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArr) / sizeof(intArr[0]);  // Calculate size of the array

    cout << "Original array: ";
    print(intArr, n);

    Sort(intArr, n);

    cout << "Sorted array: ";
    print(intArr, n);

    return 0;
}

