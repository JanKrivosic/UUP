

#include <iostream>
using namespace std;

int main()
{
    double x, y;
    double r;
    double udaljenost;
    cout << "unesite udaljenost na x osi";
    cin >> x;
    cout << endl;
    cout << "unesite udaljenost na y osi";
    cin >> y;
    cout << endl;
    cout << "unesite udaljenost na r osi";
    cin >> r;
    cout << endl;
    udaljenost = sqrt(x * x + y * y);
    bool siguran = udaljenost >= r;
    cout << "udaljenost od ishodista je" << udaljenost << endl;
    cout << "je li sigurno" << (siguran ? "1" : "0") << endl;


}
