// Recursive function that multiply a
// number by repeated sums.

// a * b = a + a + ... + a
//         ---------------> by b times

#include <iostream>

using namespace std;

int multiply(int a, int b) {
    if(b == 0) {
        return 0;
    }

    return multiply(a, b - 1) + a;
}

int main()
{
    int a = 5, b = 2;
    cout << a * b << endl;
    cout << multiply(a, b);
    return 0;
}
