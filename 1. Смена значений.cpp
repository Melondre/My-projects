#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float a, b, c;

	cout << "Veddite a: ";
	cin >> a;
	cout << "Veddite b: ";
	cin >> b;

	c = a;
	a = b;
	b = c;

	cout << "Znachenie A:" << a << endl;
	cout << "Znachenie B:" << b << endl;
}
