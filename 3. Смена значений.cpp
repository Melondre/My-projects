#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float a, b, c, z;

	cout << "Veddite a: ";
	cin >> a;
	cout << "Veddite b: ";
	cin >> b;
	cout << "Veddite c: ";
	cin >> c;

	z = a;
	a = c;
	c = b;
	b = z;
	

	cout << "Znachenie A:" << a << endl;
	cout << "Znachenie B:" << b << endl;
	cout << "Znachenie C:" << c << endl;
}
