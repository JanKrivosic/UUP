#include <iostream>
using namespace std;

int main() {
    int a, b;
    int x = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            x++;
        }
    }

    if (x == 0) {
        cout << "NEMA";
    }

    cout << endl;
    cout << "Broj parnih brojeva: " << x;

    return 0;
}