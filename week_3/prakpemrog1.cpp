#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b ,c, d; 
    long double x1, x2;
    cout << "Please input three number in this format: 3 5 2" << endl;
    cin >> a >> b >> c;

    d = (b*b) - (4*a*c);

    if(d > 0){
        x1 = ((-b + sqrt(d))/2*a);
        x2 = ((-b - sqrt(d))/2*a);
        cout << "The value of each root are: " << x1 << " and " << x2 << endl;
    }
    else if(d == 0){
        x1 = x2 = -b/2*a;
        cout << "The value of each root are the same which is: " << x1 << endl;
    }
    else if(d < 0){
        x1 = -b/2*a + (sqrt(abs(-d)))/2;
        x2 = -b/2*a - (sqrt(abs(-d)))/2;
        cout << "The value of each root are: " << x1 << "i" << " and " << x2 << "i" << endl;
    }
}
