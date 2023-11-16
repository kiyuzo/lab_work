#include <iostream>
using namespace std;

int main() {
    // Inputs the first array
    int mat1[6];
    cout << "Enter elements of array 1 [6 integers]: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Enter element a" << i + 1 << " : ";
        cin >> mat1[i];
    }

    // Inputs the second array
    int mat2[6];
    cout << "Enter elements of array 2 [6 integers]: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Enter element b" << i + 1 << " : ";
        cin >> mat2[i];
    }

    // Find the intersection and determine its size
    int mat3[6];
    int size = 0;

    cout << "The intersection of your integers are : " << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (mat1[i] == mat2[j]) {
                mat3[size] = mat1[i];
                size++;
            }
        }
    }

    // Sort the intersection from smallest to largest
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mat3[j] > mat3[j + 1]) {
                int temp = mat3[j];
                mat3[j] = mat3[j + 1];
                mat3[j + 1] = temp;
            }
        }
    }

    // Output the sorted intersection
    cout << "The intersection of the array is : " << endl;
    for (int i = 0; i < size; i++) {
        cout << mat3[i] << endl;
    }
}
