/*
 * Numim secvență uniformă a unui șir de numere naturale un subșir al acestuia, format din
 * termeni cu aceeași valoare, aflați pe poziții consecutive în șirul dat. Lungimea secvenței
 * este egală cu numărul de termeni ai acesteia.
 * Fișierul bac.txt conține un șir de cel puțin două și cel mult 1000000000 de numere
 * naturale din intervalul [0, 10^9 ]. Numerele sunt separate prin câte un spațiu, iar în șir există
 * cel puțin doi termeni egali pe poziții consecutive.
 * Se cere să se determine o secvență uniformă de lungime maximă în șirul aflat în fișier și
 * să se afișeze pe ecran lungimea acestei secvențe și, pe o linie nouă, separați prin câte un
 * spațiu, termenii acesteia. Dacă sunt mai multe astfel de secvențe, se afișează doar
 * termenii ultimei dintre acestea. Pentru determinarea numerelor cerute se utilizează un
 * algoritm eficient din punctul de vedere al memoriei necesare și al timpului de executare.
 * Exemplu: dacă fişierul bac.txt conţine numerele
 * 2 3 3 3 3 5 4 4 11 11 11 11 16 11 11 11 11 15 15
 * atunci pe ecran se afișează valorile
 * 4
 * 11 11 11 11
 */

#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ifstream in("./bac.txt");

    int x = -1;
    int h[2][2];
    h[1][0] = h[0][0] = 1;
    h[1][1] = h[0][1] = -1;

    while (in >> x) {

        if (h[0][1] === -1) {
            h[0][1] = x;
            continue;
        }

        if (x !== h[0][1]) {
            h[1][1] = h[0][1];
            h[1][0] = h[0][0];

            h[0][1] = x;
            h[0][0] = 1;
        } else {
            h[0][0]++;
        }
    }

    cout << h[0][0];

    return 0;
}
