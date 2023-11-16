#include <iostream>
using namespace std;

int main(){
    //Inputs the size of the array
    int n;
    cout << "How many integers do you want to input?" << endl;
    cin >> n;
    int lowMissInt = 1;

    //Inputs the array
    int mat[n];
    cout << "Write the integers separated by spaces : ";
    for(int i = 0; i < n; i++){
        cin >> mat[i];
    }

    //Sort the integers and arrange it in increasing order
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (mat[j] > mat[j + 1]) {
                int temp = mat[j];
                mat[j] = mat[j + 1];
                mat[j + 1] = temp;
            }
        }
    }

    //Check for the lowest missing positve integer
    for(int i = 0; i < n; i++){
        if(mat[i] == lowMissInt){
            lowMissInt++;
        }
    }

    //Outputs the lowest missing integer
    cout << "The lowest missing positive integer is " << lowMissInt << endl;
}
