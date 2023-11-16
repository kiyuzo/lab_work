#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Please insert the max number of the multiplication table: ";
    cin >> n;

    cout << "    ";
    for(int i = 0; i <= n; i++){
        if(i < 10){
        cout << "   " << i;
        }
        else{
            cout << "  " << i;
        }
    }
    cout << endl;

    for(int i = 0; i <= n; i++){
        if(i < 10){
            cout << i << "  -";
        }
        else{
            cout << i << " -";
        }
        for(int j = 0; j <= n;j++){
            if(i*j < 10){
                cout << "   " << i*j; 
            }
            else if(i*j < 100){
                cout << "  " << i*j;
            }
            else if(i*j < 1000){
                cout << " " << i*j;
            }
        }
        cout << endl;
    }
}
