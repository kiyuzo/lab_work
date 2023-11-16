#include <iostream>
using namespace std;

float calculate_gpa(int n, char score[], int sks[]) {
    int sumScore = 0;
    for (int i = 0; i < n; i++) {
        if (score[i] == 'A' || score[i] == 'a') {
            sumScore += 4*sks[i];
        }
        else if (score[i] == 'B' || score[i] == 'b') {
            sumScore += 3*sks[i];
        }
        else if (score[i] == 'C' || score[i] == 'c') {
            sumScore += 2*sks[i];
        }
        else if (score[i] == 'D' || score[i] == 'd') {
            sumScore += 1*sks[i];
        }
        else if (score[i] == 'E' || score[i] == 'e') {
            sumScore += 0*sks[i];
        }
    }

    int sumSks = 0;
    for (int i = 0; i < n; i++) {
        sumSks += sks[i];
    }

    return sumScore / sumSks;
}

int main() {
    int n;
    cout << "Please insert how many score and SKS you will input : ";
    cin >> n;

    char studentScores[n];
    cout << "Please insert your student scores separated by spaces : ";
    for(int i = 0; i < n; i++){
        cin >> studentScores[i];
    }

    int studentSks[n];
    cout << "Please insert your student SKS separated by spaces : ";
    for(int i = 0; i < n; i++){
        cin >> studentSks[i];
    }

    cout << "Your student's GPA is " << calculate_gpa(n, studentScores, studentSks);

    return 0;
}
