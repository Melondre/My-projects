#include<iostream>

using namespace std;

int main()
{
	float X, A, Y, P, S;

	cout << "Veddite X: ";
	cin >> X;
	cout << "Veddite A: ";
	cin >> A;
	cout << "Veddite Y: ";
	cin >> Y;

	P = A / X;
	S = Y * P;

	cout << "Cena: " << P << endl;
	cout << "Stoimost: " << P << endl;
	return 0;

}
