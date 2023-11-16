#include <iostream>
using namespace std;

struct Date {
    int date;
    int month;
};

struct ZodiacDate {
    string zodiac;
    int dateStart;
    int dateEnd;
};

int main() {
    Date birthDate;

    cout << "Please enter your birth month : ";
    cin >> birthDate.month;
    while (birthDate.month < 1 || birthDate.month > 12) { // foolproof the month isnt less than 1 or more than 12
        cout << "Invalid Birth Month! Try Again : ";
        cin >> birthDate.month;
    }

    cout << "Please enter your birth date: ";
    cin >> birthDate.date;
    while (birthDate.date < 1 || birthDate.date > 31) {
        cout << "Invalid Birth Date! Try Again: ";
        cin >> birthDate.date;
    }

    // Foolproof for february
    if (birthDate.month == 2 && birthDate.date > 29) {
        cout << "Invalid Birth Date! Try Again: ";
        cin >> birthDate.date;
    }

    // Foolproof for month that only as 30 days
    if ((birthDate.month == 4 || birthDate.month == 6 || birthDate.month == 9 || birthDate.month == 11) && birthDate.date > 30) {
        cout << "Invalid Birth Date! Try Again: ";
        cin >> birthDate.date;
    }

    int daySum = birthDate.date; // determining what day of the year the month and the date is
    for(int i = 1; i < birthDate.month; i++){
        if(i == 2){
            daySum+=28;
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            daySum+=30;
        }
        else{
            daySum+=31;
        }
    }

    //declaring the range of each zodiac
    ZodiacDate ZodiacName[13] = {   // the array is 13 because i wrote capricorn twice
        {"Aries", 80, 109},
        {"Taurus", 110, 140},
        {"Gemini", 141, 171},
        {"Cancer", 172, 203},
        {"Leo", 204, 234},
        {"Virgo", 235, 265},
        {"Libra", 266, 295},
        {"Scorpio", 296, 325},
        {"Sagittarius", 326, 355},
        {"Capricorn", 1, 19}, // this one is after the year
        {"Capricorn", 356, 365}, // this one is before the year 
        {"Aquarius", 20, 49},
        {"Pisces", 50, 79}
    };


    string zodiacSign;

    for (int i = 0; i < 13; i++) { // determining your zodiac...
        if (daySum >= ZodiacName[i].dateStart && daySum <= ZodiacName[i].dateEnd) {
            zodiacSign = ZodiacName[i].zodiac;
            break;
        }
    }

    cout << "Your zodiac sign is " << zodiacSign << endl;

    return 0;
}
