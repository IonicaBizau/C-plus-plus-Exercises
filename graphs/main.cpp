/*
    Ionica Bizau
    ------------
    19.03.2013
*/

/*
    Fisierul atestat.in contine:
    n - natural nenul: apartinand (2, 10)  - numarul de varfuri al unui graf neorientat
    Pe urmatoarele linii pana la sfarsit:
     - perechi de valori x, y cu semnificatia: varful x legat de varful y printr-o muchie

    a) Matricea de adiacenta - pe ecran
    b) Sa se citeasca de la tastatura un numar natural v reprezentand valoarea unui varf
    al grafului ---> Pe ecran: gradul varfului v.
    c) Sa se modifice matricea a astfel incat graful sa devina completa, si sa afiseze in
    fisierul atestat.out matricea rezultata linie cu linie, elementele de pe aceeasi linie
    fiind separate printr-un spatiu.

    Indicatii: la citirea unei muchii [x, y] in matricea de adiacenta a grafului a[x][y] = 1;
    Daca graful este neorientat, matricea este simetrica fata de diagonala principala: adica a[y][x] = 1;

    Gradul unui nod este egal cu numarul de muchii incidente cu acel nod (suma elementelor de pe linia x
    corespunzatoare).

    Un graf complet < = > oricare ar fi x, y din Z => Muchia x, y din U (altfel spus are toate muchiile posibile).
*/

#include <iostream>
#include <fstream>

using namespace std;

int mat[100][100];

void initialize(int n, int o) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            mat[i][j] = o;
        }
    }
}

void afiseazaMatricea(int n, bool fisier) {
    ofstream out("atestat.out");

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(fisier) {
                out << mat[i][j] << " ";
            }
            else {
                cout << mat[i][j] << " ";
            }
        }
        if(fisier) {
            out << endl;
        }
        else {
            cout << endl;
        }
    }

    out.close();
}

int grad(int varfID, int n) {
    int g = 0;

    for (int i = 1; i <= n; i++) {
        g += mat[varfID][i];
    }

    return g;
}

int main()
{
    ifstream in("atestat.in");
    ofstream out("atestat.out");

    int n;
    in >> n;

    initialize(n, 0);

    int t, cinX = true;
    int x, y;

    while(in >> t) {
        if(cinX) {
            x = t;
            cinX = false;
        }
        else {
            y = t;
            cinX = true;
        }

        if(cinX) {
            mat[x][y] = mat[y][x] = 1;
        }
    }

    // A) Afiseaza matricea pe ecran
    afiseazaMatricea(n, false);

    // B) Afiseaza gradul varfului v
    int v = 0;

    cout << "\nIntroduceti varful v. V = ";
    cin >> v;

    cout << grad(v, n);

    // C) Matricea grafului complet <=> toate muchiile complete
    // => toate elementele grafului 1

    initialize(n, 1);

    // Afiseaza in fisier...
    afiseazaMatricea(n, true);

    return 0;
}
