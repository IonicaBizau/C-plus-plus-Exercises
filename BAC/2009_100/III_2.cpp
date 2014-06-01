#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void F(int x) {
    cout << x;
    if (x >= 3) {
        F(x - 2);
    }
    cout << x - 1;
}

int main() {
    F(5);
    return 0;
}
