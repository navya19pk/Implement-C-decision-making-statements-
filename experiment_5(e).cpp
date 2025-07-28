// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest;

    if (a > b) {
        
        if (a > c) {
            largest = a;
        } else {
            largest = c;
        }
    } else {
    
        if (b > c) {
            largest = b;
        } else {
            largest = c;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}

//Output:
//Enter three numbers: 19
//23
//16
//The largest number is: 23
