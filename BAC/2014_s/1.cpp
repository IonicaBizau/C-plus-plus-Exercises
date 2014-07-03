/*
 * Se consideră un text cu cel mult 100 de caractere, în care cuvintele sunt formate numai din
 * litere mici ale alfabetului englez și sunt separate prin câte un spațiu.
 * Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul menţionat mai sus şi
 * determină transformarea acestuia în memorie, astfel încât din fiecare cuvânt format dintr-un
 * număr impar de litere (cel puțin trei) să se elimine litera aflată pe poziția din mijloc, ca în
 * exemplu. Programul afişează pe ecran textul obţinut, iar dacă nu există niciun cuvânt
 * modificat, afișează pe ecran mesajul nu exista.
 * Exemplu: pentru textul
 * pictura prin aceea arata o pace profunda
 * se afişează
 * picura prin acea arta o pace profunda
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main ()
{
    char s[100];
    char words[100][100];
    gets(s);
    bool m = false;

    int a = 0;
    int b = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        char c = s[i];
        s[i] = ' ';
        if (c == ' ')
        {
            a++;
            b = 0;
            continue;
        }
        words[a][b++] = c;
    }

    int k = -1;
    for (int i = 0; i <= a; ++i)
    {
        int l = strlen(words[i]);
        int o = -1;
        if (l >= 3 && l % 2 != 0) {
            o = l / 2;
            m = true;
        }

        for (int ii = 0; ii < l; ++ii)
        {
            if (ii == o) { continue; }
            s[++k] = words[i][ii];
        }

        s[++k] = ' ';
    }

    if (!m) {
        cout << "nu există";
    } else {
        puts(s);
        cout << endl;
    }
    return 0;
}
