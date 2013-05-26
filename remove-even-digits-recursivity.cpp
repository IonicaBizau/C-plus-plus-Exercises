#include <iostream>

using namespace std;

int rmEven(int n) {
    int c = n % 10;

    if(n == 0) {
        return 0;
    }

    if(c % 2 == 0) {
        return rmEven(n / 10);
    }

    return rmEven(n / 10) * 10 + c;
}

int main() {
    cout << rmEven(123456); // a test number
    return 0;
}

