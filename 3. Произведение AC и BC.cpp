#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float A, B, C, AC, BC, S;

	cout << "Veddite A: ";
	cin >> A;
	cout << "Veddite B: ";
	cin >> B;
	cout << "Veddite C: ";
	cin >> C;

	if ((C < B) & (C > A))
	{

		AC = C - A;
		BC = C - B;
		S = AC + BC;

		cout << "Summa otrezkov: " << S << endl;

	}
	else
	{
		cout << "C ne lezhit mezhdu A i B ";
	}
}
