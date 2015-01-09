/*
    Ionica Bizau
    22 Februarie 2013
    Grafuri
*/

/*
Matricea lanturilor - algoritmul Roy-Warshall
---------------------------------------------
Se citeste un graf neorientat cu n noduri si
m muchii dat prin vectorul muchiilor. Sa se
construiasca o matrice existentei lanturilor

 a[i][j] = 1 daca exista lant de la i la j
           0 in caz contrar

░░░██1█████████████████████2█░
░░░░████░░░░░░░░░░░░░░░░░░░█░░
░░░░░░░████░░░░░░░░░░░░░░░█░░░
░░░░░░░░░░░████░░░░░░░░░██░░░░
░░░░░░░░░░░░░░████░░░░░█░░░░░░
░░░4██░░░░░░░░░░░████░█░░░░░░░
░░░█░████░░░░░░░░░░░3█░░░░7█░░
░░░█░░░░███░░░░░░░░░░░░░░░█░░░
░░░██░░░░░░███░░░░░░░░░░░░█░░░
░░░░█░░░░░░░░████░░░░░░░░░█░░░
░░░░█░░░░░░░░░░░███░░░░░░░█░░░
░░░░█░███████████6██░░░░░░█░░░
░░░░5█░░░░░░░░░░░░░░░░░░░░8░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░9█░░░░░░░░░


Ex: Pentru graful reprezentat mai sus se obtine matricea lanturilor urmatoare:

0 1 1 0 0 0 0 0 0
1 0 1 0 0 0 0 0 0
1 1 0 0 0 0 0 0 0
0 0 0 0 1 1 0 0 0
0 0 0 1 0 1 0 0 0
0 0 0 1 1 0 0 0 0
0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0 0

*/


#include <iostream>

using namespace std;

int graph[100][100];

void initialize(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            graph[i][j] = 0;
        }
    }
}

void writeGraph(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void readGraph(int m, int n) {
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

int main() {
    int n = 0,
        m = 0;

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    initialize(n);

    readGraph(m, n);
    writeGraph(n);

    return 0;
}
