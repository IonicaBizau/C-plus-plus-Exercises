#include <iostream>

using namespace std;

int main () {
    int m = 0;

    double x[50]
         , y[50]
         , d[50][50]
         ;

    cout << "m = ";
    cin >> m;

    // Read input data
    for (int i = 0; i <= m; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        //cout << "y[" << i << "] = ";
        //cin >> y[i];
        y[i] = (double)(1 / (1 + x[i] * x[i]));
    }

    for (int i = 0; i <= m; i++) {
        d[0][i] = y[i];
    }

    for (int k = 1; k <= m; k++) {
        for (int i = 0; i <= m - k; i++) {
            d[k][i] = (double)((1 / (x[i + k] - x[i])) * (d[k - 1][i + 1] - d[k - 1][i]));
        }
    }

    for (int y = 1; y <= m; ++y) {
        for (int x = 0; x <= m - y; ++x) {
            cout << d[y][x] << " ";
        }
        cout << "\n";
    }

    return 0;
}
