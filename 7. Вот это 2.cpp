#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float A, A2, A4, A8, A3, A12, A15;

	cout << "Veddite A:";
	cin >> A;

	A2 = A * A;
	A3 = A2 * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	A12 = A8 * A4;
	A15 = A12 * A3;

	cout << "Znachenie A:" << A15 << endl;
}
