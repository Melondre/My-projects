#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(void)
{
    int A;
    cout << "A:";
    cin >> A;
 
    A = abs (A);

  if (A%10==A/1000 & A%100/10 == A%1000/100) {
       cout << "Истинно";
 }
 else 
 {
 cout << "Ложь";
 }
}
