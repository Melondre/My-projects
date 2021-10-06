#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, x2, y1, y2, P;

	cout << "Veddite x1: ";
	cin >> x1;
	cout << "Veddite y1: ";
	cin >> y1;
	cout << "Veddite x2: ";
	cin >> x2;
	cout << "Veddite y2: ";
	cin >> y2;

	P = sqrt((pow((y2 - y1), 2)) + (pow((x2 - x1), 2)));

	cout << "Pacctoianie mezhdu tochkami: " << P << endl;
}
