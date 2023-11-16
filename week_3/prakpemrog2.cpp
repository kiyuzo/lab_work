#include <iostream>
using namespace std;

int main(){
    int birth_date, birth_month, day;

    cout << "Please input your birth date" << endl;
    cin >> birth_date;
    while(birth_date > 31){
        cout << "Invalid Date, please try again" << endl;
        cin >> birth_date;
    }

    cout << "Please input your birth month" << endl;
    cin >> birth_month;
    while(birth_month > 12){
        cout << "Invalid Month, please try again" << endl;
        cin >> birth_month;
    }

        switch(birth_month){
        case 1:
        day = 0;
        break;
        case 2:
        day = 31;
        break;
        case 3:
        day = 59;
        break;
        case 4:
        day = 90;
        break;
        case 5:
        day = 120;
        break;
        case 6:
        day = 151;
        break;
        case 7:
        day = 181;
        break;
        case 8:
        day = 212;
        break;
        case 9:
        day = 243;
        break;
        case 10:
        day = 273;
        break;
        case 11:
        day = 304;
        break;
        case 12:
        day = 334;
        break;
    }
    day+=birth_date;

    if(day >= 1 && day <= 19){
        cout << "Your zodiac is Capricorn" << endl;
    }
        else if(day >= 20 && day <= 49){
        cout << "Your zodiac is Aquarius" << endl;
    }
    else if(day >= 50 && day <= 79){
        cout << "Your zodiac is Pisces" << endl;
    }
    else if(day >= 80 && day <= 109){
        cout << "Your zodiac is Aries" << endl;
    }
    else if(day >= 110 && day <= 140){
        cout << "Your zodiac is Taurus" << endl;
    }
    else if(day >= 141 && day <= 171){
        cout << "Your zodiac is Gemini" << endl;
    }
    else if(day >= 172 && day <= 203){
        cout << "Your zodiac is Cancer" << endl;
    }
    else if(day >= 204 && day <= 234){
        cout << "Your zodiac is Leo" << endl;
    }
    else if(day >= 235 && day <= 265){
        cout << "Your zodiac is Virgo" << endl;
    }
    else if(day >= 266 && day <= 295){
        cout << "Your zodiac is Libra" << endl;
    }
    else if(day >= 296 && day <= 325){
        cout << "Your zodiac is Scorpio" << endl;
    }
    else if(day >= 326 && day <= 355){
        cout << "Your zodiac is Sagittarius" << endl;
    }
    else if(day >= 356 && day <= 365){
        cout << "Your zodiac is Capricorn" << endl;
    }
}
