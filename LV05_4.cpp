//Noah Bozic

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Unesi termine a, b, c i d" << endl;
    cin >> a >> b >> c >> d;
    int kasniji_pocetak = a;
    if (c > kasniji_pocetak) {
        kasniji_pocetak = c;
    }
    int raniji_zavrsetak = b;
    if (d < raniji_zavrsetak) {
        raniji_zavrsetak = d;
    }
    int duljina = raniji_zavrsetak - kasniji_pocetak;
    if (duljina < 0) {
        duljina = 0;
    }
    cout << duljina << endl;
    return 0;
}