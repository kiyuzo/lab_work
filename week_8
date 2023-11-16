#include <iostream>
using namespace std;

int reversed(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    int digit;
    digit = n % 10;
    rev = rev * 10 + digit;
    return reversed(n / 10, rev);
}

int main() {
    int n;
    cout << "Original : ";
    cin >> n;

    int rev = reversed(n);
    cout << "Reversed : " << rev << endl;
    return 0;
}
