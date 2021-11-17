#include<iostream>

using namespace std;

int main()
{
	float A1, B1, C1, A2, B2, C2, X, Y, D;

	cout << "Veddite A1: ";
	cin >> A1;
	cout << "Veddite B1: ";
	cin >> B1;
	cout << "Veddite A2: ";
	cin >> A2;
	cout << "Veddite B2: ";
	cin >> B2;
	cout << "Veddite C1: ";
	cin >> C1;
	cout << "Veddite C2: ";
	cin >> C2;

	D = A1 * B2 - A2 * B1;
	X = (C1 * B2 - C2 * B1) / D;
	Y = (A1 * C2 - A2 * C1) / D;

	cout << "X: " << X << endl;
	cout << "Y: " << Y << endl;
	return 0;

}
