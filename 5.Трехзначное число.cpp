include <iostream>
using namespace std;

int main() {

	int abc, bca;

	cout << "Veddite trexznachnoe chislo:";

	cin >> abc;

	cout << endl;

	bca = (abc % 100 / 10 * 100) + (abc % 10) * 10 + abc / 100;

	cout << "Polychennoe chislo:" << bca;

}
