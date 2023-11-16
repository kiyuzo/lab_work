#include <iostream>
using namespace std;

int main(){
    //Inputs the first matrix
    int mat1[2][2];
    cout << "Enter the element of matrix A : " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Enter the element of a" << i+1 << j+1 << " : ";
            cin >> mat1[i][j];
        }
    }
    cout << endl;

    //Inputs the second matrix
    int mat2[2][2];
    cout << "Enter the element of matrix B : " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Enter the element of b" << i+1 << j+1 << " : ";
            cin >> mat2[i][j];
        }
    }
    cout << endl;

    //Outputs the first matrix
    cout << "Matrix A :" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(mat1[i][j] > 0){
                cout << "   " << mat1[i][j];
            }
            else{
                cout << "  " << mat1[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    //Outputs the second matrix
    cout << "Matrix B :" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
           if(mat2[i][j] > 0){
                cout << "   " << mat1[i][j];
            }
            else{
                cout << "  " << mat2[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    //Outputs the multiplication of both matrices
    int mat3[2][2];
    cout << "Output Matrix :" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat3[i][j] = 0;
            for(int k = 0; k < 2; k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
            if(mat3[i][j] >= 0){
                cout << "   " << mat3[i][j];
            }
            else{
                cout << "  " << mat3[i][j];
            }
        }
        cout << endl;
    }
}
