#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) cout << '.';
        cout << n[i];
        for (int j = 0; j < 5 - i; j++) cout << '.';
        cout << endl;
    }

    return 0;
}
