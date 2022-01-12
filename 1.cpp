#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int A, B;
	cout << "A:";
	cin >> A;
	cout << endl;
	cout << "B:";
	cin >> B;

	if (A > 2 && B <= 3) {
		cout << "Истинно";
	}
	else {
		cout << "Ложь";
	}
}
