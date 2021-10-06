#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float Ax, Bx, Cx, Ay, By, Cy, AC, BC, S;

	cout << "Veddite Ax: ";
	cin >> Ax;
	cout << "Veddite Ay: ";
	cin >> Ay;
	cout << "Veddite Bx: ";
	cin >> Bx;
	cout << "Veddite By: ";
	cin >> By;
	cout << "Veddite Cx: ";
	cin >> Cx;
	cout << "Veddite Cy: ";
	cin >> Cy;

	if ((Cx < Bx) & (Cy < By) & (Cx > Ax) & (Cy > Ay))
	{

		AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
		BC = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
		S = AC + BC;

		cout << "Summa otrezkov: " << S << endl;

	}
	else
	{
		cout << "C ne lezhit mezhdu A i B ";
	}
}
