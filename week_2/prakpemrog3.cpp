#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Please input two numbers in this format: 15 4" << endl;
    cin >> x >> y;

    z = x;
    x = y;
    y = z;

    cout << "Your inverted number is: " << x << " " << y << endl;
    return 0;
}
