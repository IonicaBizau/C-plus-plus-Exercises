#include <iostream>

using namespace std;

void punctulA() {
    // Afisarea numerelor naturale
    int r = 0;
    int k = 0;

    for (int i = 10; i < 100; ++i) {

        if (i % 2 != 0) { cout << i << "\t"; ++r; ++k; }
        if (r == 4) { r = 0; cout << endl; }

    }

    cout << "\nNumere gasite: " << k << endl;

}

void punctulB() {
    int sum, nr;

    for (int i = 9; i < 100; ++i) {
        if (i % 2 == 0) {
            sum += i;
            ++nr;
        }
    }

    cout << "Media numerelor impare din doua cifre este " << sum / nr << endl;
}

void punctulC() {
    int nr = 0;
    for (int i = 100; i < 1000; ++i) {
        if (i % 2 != 0) {
            ++nr;
        }
    }
    cout << "Numere impare din trei cifre: " << nr << endl; 
}

void punctulD() {
    for (int i = 100; i < 1000; ++i) {
        if (i % 2 != 0) {
            // cout << "Ultima cifra a numarului " << i << " este " << i % 10 << endl;
            cout << i % 10 << " ";
        }
    }
}

int main () {
   punctulA(); 
   punctulB(); 
   punctulC(); 
   punctulD(); 

   return 0;
}
