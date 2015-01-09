Grafuri - problema
==================

## Cerinta
Fisierul `atestat.in` contine:
 - n - natural nenul: apartinand (2, 10)
   Numarul de varfuri al unui graf neorientat
 - perechi de valori x, y cu semnificatia: varful x legat de varful y printr-o muchie

Cerinte:
a) Matricea de adiacenta - pe ecran
b) Sa se citeasca de la tastatura un numar natural v reprezentand valoarea unui varf al grafului ---> Pe ecran: gradul varfului v.
c) Sa se modifice matricea a astfel incat graful sa devina completa, si sa afiseze in fisierul `atestat.out` matricea rezultata linie cu linie, elementele de pe aceeasi linie fiind separate printr-un spatiu.

Indicatii: la citirea unei muchii [x, y] in matricea de adiacenta a grafului a[x][y] = 1;
Daca graful este neorientat, matricea este simetrica fata de diagonala principala: adica a[y][x] = 1;

Gradul unui nod este egal cu numarul de muchii incidente cu acel nod (suma elementelor de pe linia x corespunzatoare).

Un graf complet <=> oricare ar fi x, y din Z => Muchia x, y din U (altfel spus are toate muchiile posibile).

## Rezolvare
Functia care returneaza gradul:

```C++
int grad(int varfID, int n) {
  int g = 0;

  for (int i = 1; i <= n; i++) {
    g += mat[varfID][i];
  }

  return g;
}
```

... vezi fisierul `main.cpp`.
