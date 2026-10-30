#include <iostream>
using namespace std;

int main() {
    int clan, iznos;

    cout << "Unesi clan (0 ili 1) i iznos kupovine: ";
    cin >> clan >> iznos;

    if ((clan == 1 && iznos >= 50) || iznos >= 100)
        cout << "POPUST";
    else
        cout << "BEZ POPUSTA";

    return 0;
}