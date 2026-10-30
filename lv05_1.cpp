// lv05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int d, imaLiPozivnicu;
    cout << "Koliko imas godina? ";
    cin >> d;
    cout << endl;
    cout << "Imas li pozivnicu? ";
    cin >> imaLiPozivnicu;
    cout << endl;

    if (d < 16) {
        cout << "ODBIJEN";
    }
    else {
        if (d <= 17) {
            if (imaLiPozivnicu == 1) {
                cout << "ULAZ";
            }
            else {
                cout << "ODBIJEN";
            }
        }
        else {
            cout << "ULAZ";
        }
    }

    return 0;
}