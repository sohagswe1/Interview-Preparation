#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 3;
    int i = 0;

    while (i < rows) {
        int j = 0;
        int val = 6;  
        while (j < cols) {
            cout << val << " ";
            val--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
