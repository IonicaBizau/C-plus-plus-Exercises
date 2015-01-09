/*
    Ionica Bizau
    ------------

    Se citeste de la tastatura o matrice patratica de orinul n cu elemente de 0 si 1.
    Afisati daca matricea poate fi matrice de adiacenta a unui graf neorientat.

    ------------
    Exemplu:

    > n = 3;

    0 1 1
    1 0 1
    1 1 0

    Matricea poate fi matrice de adiacenta.
*/

#include <iostream>

using namespace std;

int a[100][100];

int n = 0;

bool valid() {
    for (int i = 0; i < n; i++) {
        if(a[i][i] != 0) {
            cout << "Diagonala contine elemente diferite de 0." << endl;
            return false;
        }

        for (int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                cout << "a[i][j] nu este egal cu a[j][i]" << endl;
                return false;
            }
        }
    }
    return true;
}

void afisare() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void citire() {
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

int main() {
    // Citire
    citire();

    // Afisare
    afisare();

    // Validare
    if(valid()) {
        cout << "Matricea poate fi matrice de adiacenta.";
    }
    else {
        cout << "Matricea NU poate fi matrice de adiacenta.";
    }

    return 0;
}
