#include<iostream>

using namespace std;

int main()
{
	float V1, V2, S, T, O;

	cout << "Veddite V1: ";
	cin >> V1;
	cout << "Veddite V2: ";
	cin >> V2;
	cout << "Veddite S: ";
	cin >> S;
	cout << "Veddite T: ";
	cin >> T;

	O = S + V1 * T + V2 * T;

	cout << "Rasstoyanie: " << O << endl;

	return 0;

}
