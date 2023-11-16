#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
    int turns = 0;
    int num;
    cout << "please insert any whole number (in Hundreds!)" << endl;
    cin >> num;
    sleep(2);

    while(num >=1000){
        cout << "Your Number is too Big! Try Again (in hundreds pls)" << endl;
        cin >> num;
        sleep(2);
    }

    turns++;
    cout << "The game has been started!!" << endl << "Now it's turn: " << turns << endl;
    sleep(2);

    while (num != 1)
    {
        if(num%2==0){
            num/=2;
            turns++;
            cout << "The new number is: " << num << endl;
            cout << "Now it's turn: " << turns << endl;
            sleep(2);
        }
        else if(num%2!=0){
            num++;
            turns++;
            cout << "The new number is: " << num << endl;
            cout << "Now it's turn: " << turns << endl;
            sleep(2);
        }
    }
    if(turns%2==0){
        cout << "Mr Gala wins the game!" << endl;
    }
    else{
        cout << "Mr Gama wins the game" << endl;
    }

}
