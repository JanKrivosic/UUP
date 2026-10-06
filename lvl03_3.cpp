// lvl03_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double e;
	double m;
	double odstupanje;
	cout << "upisi prvi signal";
	cin >> e;
	cout << "upisi drugi signal";
	cin >> m;
	cout << endl;
	odstupanje = e - m;
	cout << "odstupanje iznosi" << abs(odstupanje) << endl;
	bool stabilan = abs(odstupanje) <= 5;
	cout << "sustav je stabilan" << (stabilan ? "1" : "0") << endl;


}

