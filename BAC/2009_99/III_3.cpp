#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Nr(int &k) {
    int nrOfDigits = 0;
    k /= 10;
    int tmp = k;
    while (tmp) {
        ++nrOfDigits;
        tmp /= 10;
    }
    switch (nrOfDigits) {
        case 2: k = k % 10; break;
        case 3: k = k % 100; break;
        case 4: k = k % 1000; break;
        case 5: k = k % 10000; break;
        case 6: k = k % 100000; break;
        case 7: k = k % 1000000; break;
        case 8: k = k % 10000000; break;
    }
}

int main() {
    int k = 12438;
    Nr(k);
    cout << k;
    cout << endl;
    return 0;
}
