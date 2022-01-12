#include <iostream>
using namespace std;
 
int main() {
 setlocale(LC_ALL, "Russian");
 
 int A;
 cout << "A:";
 cin >> A;
 
 
 if ((A/100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10)) {
 cout << "Истинно";
 }
 else {
 cout << "Ложь"; 
 }
}
