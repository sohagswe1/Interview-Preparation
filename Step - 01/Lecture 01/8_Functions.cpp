#include <iostream>
using namespace std;

void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue: " << x << endl;
}

int main() {
    int a = 5;
    passByValue(a);
    cout << "After passByValue: " << a << endl;
    return 0;
}
