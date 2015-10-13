#include<iostream>

using namespace std;

int main() {
    int n = 0;
    float x[10]
        , y[10]
        , a
        , sum = 0
        , mult
        ;

    cout << "n = ";
    cin >> n;

    for(int i = 0; i <= n; ++i) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
    }

    cout << "a = ";
    cin >> a;

    for(int j = 0; j < n - 1; ++j) {
        for(int i = n - 1; i > j; --i) {
            y[i] = (y[i] - y[i - 1]) / (x[i] - x[i - j - 1]);
        }
    }

    int ii = 0;
    for(int i= n - 1; i >= 0; --i) {
        mult = 1;
        for(ii = 0; ii < i; ++ii) {
            mult *= (a - x[ii]);
        }
        mult *= y[ii];
        sum += mult;
    }

    cout << "Sum: " << sum;
    return 0;
}
