#include <iostream>
using namespace std;    

int main(){
    int hour1, hour2, min1, min2, diff;
    cout << "Please input the first hour: ";
    cin >> hour1;
    cout << "Please input the first minute: ";
    cin >> min1;

    cout << "Please input the second hour: ";
    cin >> hour2;
    cout << "Please input the second minute: ";
    cin >> min2;

    min1+=(hour1*60);
    min2+=(hour2*60);

    cout << "The difference between the two times is " << min2-min1 << " minutes" << endl;
    return 0;

}
