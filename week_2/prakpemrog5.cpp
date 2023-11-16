#include <iostream>
using namespace std;

int main(){
    long long int n, final;
    
    cout << "Please input a number that will determine the n-th number of this sequence : 1, 3, 6, 10, 15, 21, 28, 36, ..." << endl;
    cin >> n;

    final = (n*(n+1))/2;

    cout << "The number that will be in the sequence by your n is: " << final << endl;
    return 0;
}
