#include <iostream>
#include <fstream>

using namespace std;

int a[100][100];

int n = 0;

void afisare() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void initializare() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
           a[i][j] = 0;
        }
    }
}

int grad(int nod) {
    int k = 0;
    for (int i = 1; i < n; ++i) {
        if (a[nod][i] == 1) {
            ++k;
        }
    }
    return k;
}

void citire() {
    
    ifstream in("atestat.in");
    
    in >> n;
    int x, k = true;
    int i, j;

    while (in >> x) {
        if (k) {
            i = x;
            k = false;
        }
        else {
            j = x;

            a[i][j] = a[j][i] = 1;
            
            k = true;
        }
    }
}

int main() {
    // Citire
    citire();

    // Afisare
    // a) Afisarea matricei pe ecran
    afisare();

    int v = 0;
    cout << endl << "v = ";
    cin >> v;

    cout << grad(v);

    return 0;
}
