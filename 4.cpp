include <iostream>
using namespace std;

int main() {

	int A, B, C;
	int R1, R2, K;
	cout << "Veddite A:";
	cin >> A;
	cout << "Veddite B:";
	cin >> B;
	cout << "Veddite C:";
	cin >> C;

	R1 = A * B;
	R2 = C * C;

	K = R1 / R2;
	cout << "Kol - vo kvadratov:" << K;
}
