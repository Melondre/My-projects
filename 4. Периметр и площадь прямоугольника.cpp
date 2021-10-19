#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, x2, y1, y2, S, P;

	cout << "Veddite x1: ";
	cin >> x1;
	cout << "Veddite y1: ";
	cin >> y1;
	cout << "Veddite x2: ";
	cin >> x2;
	cout << "Veddite y2: ";
	cin >> y2;

	P = 2 * (abs(x1 - x2) + abs(y1 - y2));
	S = (abs(x1 - x2) * abs(y1 - y2));

	cout << "Perimetr: " << P << endl;
	cout << "Ploshad: " << S << endl;
}
