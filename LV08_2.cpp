#include <iostream>
using namespace std;

int main() {
    int a, b;
    int x = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        cout << i << " ";
        x++;

        if (x % 10 == 0) {
            cout << endl;
        }
    }

    cout << endl;
    cout << "Ukupno brojeva izmedu ta dva broja: " << x << endl;

    return 0;
}
