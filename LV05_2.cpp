//Noah Bozic

#include <iostream>
using namespace std;

int main()
{
    int g;
    cout << "Unesite broj godina: ";
    cin >> g;
    cout << endl;
    if (g < 18) {
        cout << "Cijena ulaznice je 5 eura.";
    }
    else {
        cout << "Cijena ulaznice je 8 eura.";
    }
    return 0;

}