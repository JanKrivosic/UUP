#include <iostream>
using namespace std;

int main() {
    int k, m;
    int s, d, j;

    cin >> k >> m;

    s = k / 100;
    d = (k / 10) % 10;
    j = k % 10;

    if (s == d || s == j || d == j) {
        cout << "NEVALJAN KOD";
    }
    else {
        if (m == 0) {
            if ((s + d + j) % 2 == 0) {
                cout << "OTVORENO";
            }
            else {
                cout << "ZATVORENO";
            }
        }
        else {
            if (d > j) {
                cout << "OTVORENO";
            }
            else {
                cout << "ZATVORENO";
            }
        }
    }

    return 0;
}