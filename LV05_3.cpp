//Noah Bozic

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Unesite vrijeme tri signala: a, b i c." << endl;
    cin >> a >> b >> c;
    char Pobjednik = 'A';
    int najmanjaVrijednost = a;
    if (b < a) {
        Pobjednik = 'B';
        najmanjaVrijednost = b;
    }
    if (c < b) {
        Pobjednik = 'C';
        najmanjaVrijednost = c;
    }
    cout << Pobjednik << " " << najmanjaVrijednost;
    return 0;
}