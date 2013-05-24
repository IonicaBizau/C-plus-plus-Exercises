#include <iostream>
#include <fstream>

using namespace std;

int numarCifreDin(int y) {
    int k = 0;
    while (y) { y /= 10; ++k; }
    return k;
}

int main () {

    // Se citesc n numere intregi
    int n = 0;
    cout << "n = ";
    cin >> n;

    int nrId = 0;
    int x = 0;

    int numereCitite[10000];
    int sumNeg = 0, nrNeg;

    if (n > 10000) { cout << "Eroare: numarul n trebuie sa fie mai mic decat 10000."; return 0; }
    if (!n) { cout << "n este 0, deci nu se va mai citi niciun numar."; return 0; }

    while (nrId < n) {
        cout << "x = ";
        cin >> numereCitite[nrId];
        if (numereCitite[nrId] < 0) { sumNeg += numereCitite[nrId]; ++nrNeg; }
        ++nrId;
    }

    //////////////////////////////////
    // a) afisare numerlor de 3 cifre 
    //////////////////////////////////
    int numereCuTreiCifre[10000];
    int o = -1;

    cout << "Numerele cu trei cifre sunt:" << endl;

    for (int i = 0; i < n; ++i) {
        if (numarCifreDin(numereCitite[i]) == 3) {
            numereCuTreiCifre[++o] = numereCitite[i];
            cout << numereCitite[i] << " ";
        }
    }

    cout << "\n...si mai mult: au fost gasite " << o + 1 << " numere cu trei cifre." << endl;

    ////////////////////////////////////////////
    // b) media aritmetica a numerelor negative
    ///////////////////////////////////////////

    if (sumNeg && nrNeg) { cout << "Media aritmetica a numerelor negative este: " << sumNeg / nrNeg; }
    ////////////////////////////////////////////
    // c) ultima cifra sumei numerelor pare 
    // si divizibile cu 5 și numarul acestora
    ///////////////////////////////////////////

    int sum = 0, k = 0;
    
    for (int i = 0; i < n; ++i) {
        
        int c = numereCitite[i];
        if (c % 2 == 0 && c % 5 == 0) {
            sum += c;
            ++k;
        }
    }

    cout << "Suma numerelor care indeplinesc conditia de la punctul c) este " 
         << sum 
         << " deci ultima cifra este " 
         << sum % 10 
         << ". Mai mult au fost gasite " 
         << k 
         << " numere." << endl;
    
    //////////////////////////////
    // d) Numarul numerelor ramase
    //////////////////////////////

    cout << "Au ramas " << n - k - nrNeg << " numere." << endl;
    return 0;
}
