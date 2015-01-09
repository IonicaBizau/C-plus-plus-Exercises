#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int a, b;

    // Se citesc cele doua numere
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;
    
    if (a > b) { cout << "Eroare: a trebuie sa fie mai MIC decat b."; return 0; }

    // a) afisarea ultimei cifre a sumei a + b
    cout << "Ultima cifra a sumei a + b este: " << (a + b) % 10 << endl;
    cout << "Numarul de numere intre a si b este: " << b - a << endl;
    cout << "Numarul de numere citite este 2." << endl;

    // b) afisarea numerelor divizibile cu 7, si numarul acestora
    int numere[10000];
    int j = -1;

    // Se formeaza un vector cu numerele divizibile cu 7
    for (int i = a; i <= b; ++i) {
        if (i % 7 == 0) {
            numere[++j] = i;
        }
    }

    // Se afiseaza numerele divizibile cu 7
    for (int i = 0; i <= j; ++i) {
        cout << numere[i] << " ";
    }
    
    cout << "\nSunt " << j + 1 << " numere divizibile cu 7." << endl;
    
    // c) media geometrica a numerelor divizibile cu 7
    
    //       ____________________________________________
    //   j-1/
    //    \/ numere[0] * numere[1] * ... * numere[j - 1]

    int prod = 1;
    
    for (int i = 0; i <= j; ++i) {
        prod *= numere[i];
    }

    float mG = pow(prod, 1/(j - 1));

    cout << "Media geometrica a numerelor divizibile cu 7 este: " << mG << endl;

    int numPare[10000];
    int k = -1;
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            numPare[++k] = i;
            sum += i;
        }
    }

    if (!k) { cout << "Nu exista numere pare."; return 0; }

    cout << "Media aritmetica a numerelor pare este " << sum / k;

    return 0;
}
