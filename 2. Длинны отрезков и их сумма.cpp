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
	
	AC = C - A;
	BC = C - B;
	S = AC + BC;

	cout << "AC: " << AC << endl;
	cout << "BC: " << BC << endl;
	cout << "Summa otrezkov: " << S << endl;
}
