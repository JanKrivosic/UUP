#include <iostream>

using namespace std;

int main() {
    int broj1, broj2;
    char operacija;

    if (!(cin >> broj1 >> broj2 >> operacija)) {
        return 0;
    }

    switch (operacija) {
    case '+':
        cout << broj1 + broj2 << endl;
        break;
    case '-':
        cout << broj1 - broj2 << endl;
        break;
    case '*':
        cout << broj1 * broj2 << endl;
        break;
    case '/':
        if (broj2 == 0) {
            cout << "DIJELJENJE NULOM" << endl;
        }
        else {
            cout << broj1 / broj2 << endl;
        }
        break;
    case '%':
        if (broj2 == 0) {
            cout << "DIJELJENJE NULOM" << endl;
        }
        else {
            cout << broj1 % broj2 << endl;
        }
        break;
    case '^':
        cout << broj1 * broj1 << endl;
        break;
    default:
        cout << "NEPOZNATA OPERACIJA" << endl;
        break;
    }

    return 0;
}