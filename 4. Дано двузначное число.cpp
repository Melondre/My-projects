# include <iostream>

using namespace std;

int main() {

	int ab;
	int ba;

	cout << "Veddite dvyznachnor chislo: ";

	cin >> ab;

	ba = ab / 10 + ab % 10 * 10;

	cout << "Chislo pri perestanovke cifr: " << ba << endl;

	return 0;
  
}
