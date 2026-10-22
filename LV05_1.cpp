//Noah Bozic

#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Unesite temperaturu ucionice: ";
    cin >> t;
    cout << endl;
    if (t < 20) {
        cout << "GRIJANJE";
    }
    else {
        cout << "MIROVANJE";
    }
    return 0;
}