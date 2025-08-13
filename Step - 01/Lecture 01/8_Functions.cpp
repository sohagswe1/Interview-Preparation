#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 50;
    cout << "Before function call: num = " << num << endl;
    changeValue(num);
    cout << "After function call: num = " << num << endl;
    return 0;
}
