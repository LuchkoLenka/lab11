#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number from 0 to 5: ";
    cin >> number;

    // За допомогою switch

    switch (number) {
    case 0:
        cout << "zero / zero" << endl;
        break;
    case 1:
        cout << "eins / one" << endl;
        break;
    case 2:
        cout << "zwei / two" << endl;
        break;
    case 3:
        cout << "grei / three" << endl;
        break;
    case 4:
        cout << "veir / four" << endl;
        break;
    case 5:
        cout << "funf / five" << endl;
        break;
    default:
        cout << "The number is not in the range from 0 to 5" << endl;
        break;
    }

    // За допомогою if

    if (number >= 0 && number <= 5) {
        if (number == 0) {
            cout << "zero / zero" << endl;
        }
        else if (number == 1) {
            cout << "eins / one" << endl;
        }
        else if (number == 2) {
            cout << "zwei / two" << endl;
        }
        else if (number == 3) {
            cout << "drei / three" << endl;
        }
        else if (number == 4) {
            cout << "vier / four" << endl;
        }
        else if (number == 5) {
            cout << "funf / five" << endl;
        }
    }
    else {
        cout << "The number is not in the range from 0 to 5" << endl;
    }

    return 0;
}