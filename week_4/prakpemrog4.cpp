#include <iostream>
using namespace std;

int main(){
    int n, k;
    cout << "Please enter two integers [e.g. 10 2]: ";
    cin >> n >> k;

    while(n < 1 || n > 100 || k < 1 || k > n){
        cout << "Oops, that input is invalid, please try again: ";
        cin >> n >> k;
    }

    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            cout << "* ";
        }
        else{
            cout << i << " ";
        }
    }
}
