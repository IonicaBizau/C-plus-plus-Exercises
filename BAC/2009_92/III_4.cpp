#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

#define VOCALE "AEIOU"
bool vocala (char c) {
    return strrchr(VOCALE, c);
}

int main() {
    ofstream out("./SIR.TXT");
    for (char i = 'A'; i < 'Z'; ++i) {
        for (char j = 'A'; j < 'Z'; ++j) {
            if (vocala(i) && vocala(j)) {
                continue;
            }
            out << i << j << endl;
        }
    }
    out.close();
    return 0;
}
