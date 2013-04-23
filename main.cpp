#include <iostream>

using namespace std;

int show(int k, int P, int a) {

    cout << "k = " << k << endl;

    for (int i = k; i <= a; i++) {
        cout << i << (i == a ? "" : " * ");
    }

    cout << " <= " << P;

    if (k == 1) {
        return 0;
    }

    cout << " <= ";

    for (int i = k - 1; i <= a; i++) {
        cout << i << (i == a ? "" : " * ");
    }
}

int prod(int a, int b) {
    int p = 1;

    for (int i = a; i <= b; i++) {
        p *= i;
    }

    return p;
}

int main()
{
    int a, P;

    cout << "a = ";
    cin >> a;

    cout << "P = ";
    cin >> P;

    if (a > P) {
        cout << "Error: a > P";
        return 0;
    }

    int k = 1;

    for (k = a; k > 0; k--) {
        int p = prod(k, a);

        if (p > P) {
            k++;
            show(k, P, a);
            return 0;
        }
    }

    k = 1;

    show(k, P, a);

    return 0;
}
