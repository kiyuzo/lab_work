#include <iostream>
using namespace std;

int binomial(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    else{
        return binomial(n-1, k-1) + binomial(n-1, k);
    }
}

int main(){
    int a, b;
    cout << "Enter your numbers : ";
    cin >> a >> b;
    if(b > a){
        cout << "Undefined";
    }
    else{
        cout << "Binomial Number : " << binomial(a, b) << endl;
    }
}
