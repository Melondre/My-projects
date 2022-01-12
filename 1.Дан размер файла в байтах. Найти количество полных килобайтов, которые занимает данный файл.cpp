#include <iostream>
using namespace std;
 
int main() {
    int b, res;
    cout << "Byte: ";  cin >> b;
    res = b / 1024;
    if (b % 1024 != 0) res++;
    cout << res << endl;
    return 0;
}
