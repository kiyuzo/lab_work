#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "How many integers do you want?" << endl;
    cin >> n;

    int m[n];
    cout << "Write the integers separated by spaces: ";
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }

    float sum = 0;
    for(int i = 0; i < n; i++){
        sum+=m[i];
    }

    cout << "The average integer is: " << sum/n;


}
