#include <iostream>
using namespace std;

int main(){
    int whole;
    float num;
    
    cout << "Please insert any number" << endl;
    cin >> num;

    whole = num;

    if(num - whole != 0){
        cout << "Your number is not an integer" << endl;
    }
    else if(num - whole == 0){
        cout << "Your number is an integer" << endl;
    }
}
