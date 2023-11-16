#include <iostream>
using namespace std;

bool checkPalindrome(string str) {
    // case 1 character, outputs palindrom
    if (str.length() <= 1) {
        return true;
    }

    //comparing the first char and the last char
    if (str[0] != str[str.length() - 1]) {
        return false;
    }
    //return to check second char and second from last char
    return checkPalindrome(str.substr(1, str.length() - 2));
}

int main() {
    string word;
    cout << "Enter your word : ";
    cin >> word;

    if (checkPalindrome(word)) {
        cout << "Palindrome" << endl;
    } 
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
