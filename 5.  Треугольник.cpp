#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	float x1, x2, y1, y2, x3, y3, S, p, a, b, c;

	cout << "Veddite x1: ";
	cin >> x1;
	cout << "Veddite y1: ";
	cin >> y1;
	cout << "Veddite x2: ";
	cin >> x2;
	cout << "Veddite y2: ";
	cin >> y2;
	cout << "Veddite x3: ";
	cin >> x3;
	cout << "Veddite y3: ";
	cin >> y3;

    a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
    c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "Perimetr: " << p << endl;
	cout << "Ploshad: " << S << endl;
	return 0;
}
