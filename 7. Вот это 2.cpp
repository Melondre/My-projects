#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float A, AN, AN1;

	cout << "Veddite A:";
	cin >> A;

        AN = A * A;
        AN1 = AN * A;
        AN1 = AN1 * AN;
        AN = AN1 * AN1;
        AN1 = AN * AN1;

	cout << "Znachenie A15:" << AN1 << endl;
}
