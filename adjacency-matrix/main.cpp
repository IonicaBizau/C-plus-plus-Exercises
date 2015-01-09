/*
    Ionica Bizau
    ------------
<<<<<<< HEAD
    06.03.2013

    Cerinta:

    Se citesc de la tastatura doua numere intregi m si n.
    Apoi n perechi de numere intregi reprezentand extremitatile muchiilor unui graf neorientat cu m muchii si n varfuri.

    a) Afisati matricea de adiacenta
    b) Afisati gradele varfurilor in grad.txt (pe fiecare rand se vor scrie un varf si gradul sau separate prin spatii
    c) Afisati varfurile in varf.txt de grad maxim de grad maxim si minim
    d) Afisati un graf partial al grafului dat
    e) Afisati un subgraf al grafului dat
    f) Afisati un lant in graful dat

*/


#include <iostream>
#include <fstream>

using namespace std;

int graph[100][100];

void initialize(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
}

void afiseazaMatricea(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int grad(int varfID, int n) {
    int g = 0;

    for (int i = 1; i <= n; i++) {
        g += graph[varfID][i];
    }

    return g;
}

void citesteGraful(int m, int n) {
    int x, y;

    for (int k = 1; k <= m; k++) {
        cout << "Muchia cu numarul de ordine k = "<< k << endl;

        do {
            cout << "x = ";
            cin >> x;

            cout << "y = ";
            cin >> y;
        } while(x < 1 || x > n || y < 1 || y > n);
        graph[x][y] = graph[y][x] = 1;
    }
}

void scrieGradele(int n) {
    ofstream out("grad.txt");
    ofstream out2("varf.txt");

    int min, max;

    out << "Varf\t|\tGrad" << endl;;
    out << "-----------------" << endl;

    min = max = grad(1, n);

    for (int i = 1; i <= n; i++) {
        int g = grad(i, n);

        if(min < g) {
            min = i;
        }

        if(max > g) {
            max = i;
        }

        out << i << "\t\t " << g << endl;
    }

    out2 << "Varful cu grad minim este: " << min << endl;
    out2 << "Varful cu grad maxim este: " << max << endl;

    out2.close();
    out.close();
}

void grafPartial(int n) {

}

int main() {
    int n = 0,
        m = 0;

    // Citeste n, m
    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    initialize(n);

    // Cititi graful
    citesteGraful(m, n);

    // a) Afisati matricea de adiacenta
    cout << "Matricea de adiacenta este: " << endl;
    afiseazaMatricea(n);

    // b) Afisati gradele varfurilor in grad.txt
    // (pe fiecare rand se vor scrie un varf si gradul sau separate prin spatii)

    scrieGradele(n);
    cout << "Gradele au fost scrise in fisierul grad.txt." << endl;


    // c) Afisati varfurile in varf.txt de grad maxim de grad maxim si minim
    cout << "ID-urile varfurilor cu grad minim si maxim au fost scrise in fisierul varf.txt." << endl;

    // d) Afisati un graf partial al grafului dat

    /*

        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░██2███░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░██░██░░░████░░░░░░░░░░░░░░░░░░
        ░░░░░░░░██░░░░█░░░░░░░████░░░░░░░░░░░░░░
        ░░░░░░██░░░░░░██░░░░░░░░░░████░░░░░░░░░░
        ░░░░██░░░░░░░░░█░░░░░░░░░░░░██3░░░░░░░░░
        ░░░1░░░░░░░░░░░██░░░░░░░░░██░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░█░░░░░░███░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░██░░░██░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░█░██░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░4░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░███7░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░███░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░
        ░░░███░░░░░░░░░░░░░░░░░░░5░░░░░░░░░░░░░░
        ░░6░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

        0 1 0 0 0 0 0
        1 0 1 1 0 0 0
        0 1 0 1 0 0 0
        0 1 1 0 0 0 0
        0 0 0 0 0 0 0
        0 0 0 0 0 0 1
        0 0 0 0 0 1 0

        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░███2███░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░███░░░░░░█████░░░░░░░░░░░░░
        ░░░░░░░░░░███░░░░░░░░░░░░░█████░░░░░░░░░
        ░░░░░░░███░░░░░░░░░░░░░░░░░░░░████░░░░░░
        ░░░░███░░░░░░░░░░░░░░░░░░░░░░░░░░░3░░░░░
        ░░░1░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░████7░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░█████░░░░░░░░░░░░░░░░░░░░░░█5░░░░░░░
        ░░░6░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
        ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

              *
        0 1 0 0 0 0 0
        1 0 1 0 0 0 0
        0 1 0 0 0 0 0
     *  0 0 0 0 0 0 0
        0 0 0 0 0 0 0
        0 0 0 0 0 0 0
        0 0 0 0 0 0 1
        0 0 0 0 0 1 0
        ???
    */

=======

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
>>>>>>> 68b41598d3b0098a1a9d49687bd09edea8338aa5

    return 0;
}
