#include <iostream>
#include <fstream>

using namespace std;


int main() {
    
    int r = 0;

    for (int i = 0; i < 100; ++i) {

        if (i > 9 && i < 100) { cout << i << "\t"; }
        if (r == 4) { r = 0; cout << endl; }

        ++r;
    }

    /* alte instructiuni */

    return 0;
}
