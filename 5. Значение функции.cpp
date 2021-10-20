#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x, y;

	cout << "Veddite x:";
	cin >> x;
	
	y = 4 * (pow(x - 3,6)) - 7 * (pow(x - 3,3)) + 2;

	cout << "Znachenie funkcii:" << y << endl;
}
