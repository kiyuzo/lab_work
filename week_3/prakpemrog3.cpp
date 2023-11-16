#include <iostream>
using namespace std;

int main(){
    int month, d1, d2;
    d1 = 31;
    d2 = 30;
    cout << "Please insert a number between 1-12 in term of months" << endl;
    cin >> month;

    switch(month){
        case 1:
        cout << "The first month has " << d1 << " days" << endl;
        break;
        case 2:
        cout << "The second month has 28 or 29 days" << endl;
        break;
        case 3:
        cout << "The third month has " << d1 << " days" << endl;
        break;
        case 4:
        cout << "The fourth month has " << d2 << " days" << endl;
        break;
        case 5:
        cout << "The fifth month has " << d1 << " days" << endl;
        break;
        case 6:
        cout << "The sixth month has " << d2 << " days" << endl;
        break;
        case 7:
        cout << "The seventh month has " << d1 << " days" << endl;
        break;
        case 8:
        cout << "The eighth month has " << d1 << " days" << endl;
        break;
        case 9:
        cout << "The ninth month has " << d2 << " days" << endl;
        break;
        case 10:
        cout << "The tenth month has " << d1 << " days" << endl;
        break;
        case 11:
        cout << "The eleventh month has " << d2 << " days" << endl;
        break;
        case 12:
        cout << "The twelfth month has " << d1 << " days" << endl;
        break;
        default:
        cout << "That is an Invalid Month" << endl;

    }
}
