// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1 to 7) to get the weekday: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}

//Output:
//Enter a number (1 to 7) to get the weekday: 2
//Tuesday
