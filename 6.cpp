#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << "C:";
	cin >> c;
	
	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
		cout << "Истинно";
	}
	else {
		cout << "Ложь";	
	}
}
