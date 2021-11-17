#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float A, A2, A4, A8;

	cout << "Veddite A:";
	cin >> A;

    A2 = A * A;
    A4 = A2 * A2;
    A8 = A4 * A4;

	cout << "Znachenie A:" << A8 << endl;
}
