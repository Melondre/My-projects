#include <iostream>
using namespace std;

int main() {

	int N, m;
	cout << "Seconds:";
	cin >> N;
	cout << endl;

	m = N % 3600 / 60;

	cout << "Kol-vo of minutes, since last hour:" << m;
}
