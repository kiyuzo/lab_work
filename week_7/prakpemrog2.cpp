#include <iostream>
using namespace std;

void string_from_right(string &st, int n) {
    if (n <= 0) {
        st = "  or nothing"; // if n is 0 then there is no word to be outputted
    }
    else {
        st = st.substr(st.length() - n);
    }
}

int main() {
    int n;
    string st;
    
    cout << "Please input your word: ";
    cin >> st;

    cout << "Please input the number of letters from the right: ";
    cin >> n;

    string_from_right(st, n);
    
    cout << "The shortened word is " << st << endl;

    return 0;
}
