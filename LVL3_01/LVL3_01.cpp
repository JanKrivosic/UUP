#include <iostream>

using namespace std;

int main()
{  // unosimo varijable u program// 
	int s;
	int minute=0;
	int sekunde=0;
		// izracun minuta i sekunda//
	cout << "unesi vrijeme"; cin >> s;
	minute= s / 60;
	sekunde= s % 60;
	// ispis rezultata// 
	cout << "minute=" << minute << endl;

	cout << "sekunde=" << sekunde << endl;

	return 0;
}