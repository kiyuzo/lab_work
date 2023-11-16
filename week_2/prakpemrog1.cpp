#include <iostream>
using namespace std;

int main(){
    float vel, dis, time;

    cout << "Please input your Velocity(Km/s) and Distance(Km) in this format: 60 180" << endl;
    cin >> vel >> dis;

    time = dis/vel;

    cout << "Your total time is: " << time << " Hours" << endl;
    return 0;
}
