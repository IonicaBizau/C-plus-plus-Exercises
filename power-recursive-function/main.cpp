// Recursive power function

// x ^ k = x * x * ... * x
//         ---------------> by k times

#include <iostream>

using namespace std;

int power(int x, int k) {
    if(k == 0) {
        return 1;
    }

    return power(x, k - 1) * x;
}

int main()
{
    int x = 5, k = 2;
    cout << power(x, k);
    return 0;
}
