#include <iostream>

using namespace std;

int main() 
{
    int x ;
    cin >>x ;

    if (x < 1 || x > 7) 
    {
        cout << "NEISPRAVAN DAN" << endl;
        return 0;
    }

    switch (x) {
    
    case 1:(x = 1);
        cout << "Ponedjeljak" << endl;
    case 2:(x = 2);
        cout << "Utorak" << endl;
    case 3:(x = 3);
        cout << "Srijeda" << endl;
    case 4:(x = 4);
        cout << "Cetvrtak" << endl;
    case 5:(x = 5);
        cout << "Petak" << endl;
    case 6:(x = 6);
        cout << "Subota" << endl;
    case 7:(x = 7);
        cout << "Nedjelja" << endl;

        return 0; }
}
