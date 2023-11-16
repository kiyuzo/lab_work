#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Insert a number : ";
    cin >> n;

    int binary[32]; // assuming 32 bit binary
    int index = 0;

    while(n > 0){
        binary[index] = n%2;
        n/=2;
        index++;
    }

    for(int i = index-1; i >= 0; i--){
        cout << binary[i] << " ";
    }
}
