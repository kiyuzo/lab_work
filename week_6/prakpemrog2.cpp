#include <iostream>
using namespace std;

struct studentData{
    int studentID;
    int midtermScore;
    int finalexamScore;
};

int main(){
    int n;
    cout << "Please enter how many students : ";
    cin >> n;
    while (n > 50){
        cout << "Your number is too big! Please insert a lower number : ";
        cin >> n;
    }
    
    studentData theStudent[n];
    cout << "PLEASE ENTER YOUR STUDENTS DATA BELOW" << endl;
    for(int i = 0; i < n; i++){
        cout << "Enter the data of student number " << i+1 << " : " << endl;

        cout << "Enter the ID of Student " << i+1 << " : ";
        cin >> theStudent[i].studentID;

        cout << "Enter the Midterm Score of Student " << i+1 << " : ";
        cin >> theStudent[i].midtermScore;

        cout << "Enter the Final Exam Score of Student " << i+1 << " : ";
        cin >> theStudent[i].finalexamScore;
    }

    float averageScore[n];
    for(int i = 0; i < n; i++){
        averageScore[i] = (theStudent[i].midtermScore + theStudent[i].finalexamScore)/2.0;
        // if we used 2 and not 2.0, the result will be in int, but we want the result to be float right?
    }

    cout << "AVERAGE SCORES FOR EACH STUDENT" << endl;
    for(int i = 0; i < n; i++){
        cout << "---------------" << endl << "Student ID : " << theStudent[i].studentID << endl << "Average : " << averageScore[i] << endl;
    }

    return 0;
}
