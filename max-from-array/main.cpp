// Gets the max value from an integers array in C++

#include <iostream>

using namespace std;

int array[30];
int n;

int max(int i, int j) {
    int a, b, m;

    if(i == j) {
        return array[i];
    }

    m = (i + j) / 2;
    a = max(i, m);
    b = max(m + 1, j);
    if(a > b) {
        return a;
    }
    return b;
}

int main() {
    cout << "Length of array: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    cout << "The max value from array is: " << max(1, n);

    return 0;
}
