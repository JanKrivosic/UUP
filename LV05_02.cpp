#include <iostream>
using namespace std;

int main() {
    int n, b;

    cout << "Unesi broj clanova ekipe i broj bodova" << endl;
    cin >> n >> b;

    if (n < 2 || n > 4) {
        cout << "NEISPRAVNA" << endl;
    }
    else {
        cout << "ISPRAVNA" << endl;

        if (b < 50) {
            cout << "Ispala";
        }
        else if (b < 80) {
            cout << "polufinale";
        }
        else {
            cout << "finale";
        }
    }

    return 0;
}