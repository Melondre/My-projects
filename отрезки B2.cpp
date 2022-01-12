#include <iostream>
 
using namespace std;
 
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
 
    int a, b, n = 0;
    do
    {
        cout << "Введите A и B" << endl;
        cin >> a >> b;
    }
    while (a <= b);    
    do
    {
        a -= b;
        n++;
    }
    while (a > 0 && a >= b);    
    cout <<"Количество отрезков В , размещенных на отрезке A:"<< n;  
    return 0;
}
