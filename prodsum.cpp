// Sa se efectueze suma si produsul a doua polinoame folosind liste simplu inlantuite.

#include <iostream>
#include <fstream>

using namespace std;

typedef float List;

List pol1[100];
List pol2[100];
List polSum[100];
List polProd[100];

int gr1, gr2, grSum, grProd;

void citire () {
    ifstream in("pol.in");
    
    in >> gr1;
    in >> gr2;

    for (int i = 0; i <= gr1; ++i) {
        in >> pol1[i];
    }
    
    for (int i = 0; i <= gr2; ++i) {
        in >> pol2[i];
    }

    grSum = (gr1 > gr2 ? gr1 : gr2);
    grProd = gr1 + gr2;
}

void sumPol() {
    for (int i = 0; i <= grSum; ++i) {
        polSum[i] = pol1[i] + pol2[i];
    }
}

void prodPol() {
    for (int i = 0; i <= gr1; ++i) {
        for (int j = 0; j <= gr2; ++j) {
            polProd[i + j] += pol1[i] * pol2[j];
        }
    }
}

void showSum() {
    cout << "Grad: " << grSum << endl;
    for (int i = 0; i <= grSum; ++i) {
        cout << polSum[i] << " ";
    }
}

void showProd() {
    cout << "Grad: " << grProd << endl;
    for (int i = 0; i <= grProd; ++i) {
        cout << polProd[i] << " ";
    }
}

int main()  {
    
    cout << "Se citeste continutul din pol.in." << endl;
    citire();
    cout << "Se se calculeaza suma." << endl;
    sumPol();
    cout << "Se se calculeaza produsul." << endl;
    prodPol();

    cout << "Terminat." << endl;
    cout << "Rezultat:" << endl;
    cout << "+===================+" << endl;
    cout << "| SUMA POLINOAMELOR |" << endl;
    cout << "+===================+" << endl;
    showSum();
    cout << "\n+=======================+" << endl;
    cout << "| PRODUSUL POLINOAMELOR |" << endl;
    cout << "+=======================+" << endl;
    showProd();

    return 0;
}
