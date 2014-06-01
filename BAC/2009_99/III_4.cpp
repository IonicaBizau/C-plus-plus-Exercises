#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("./DATE.TXT");
    int numbers[10000];
    int n = -1;
    int arrays[5000][4];
    int k = 0;

    for (int i = 0; i < 5000; ++i) {
        arrays[i][0] = 0;
        arrays[i][1] = -1;
        arrays[i][2] = -1;
    }

    int iMax = -1;

    while (in >> numbers[++n]) {
        if (n - 1 < 0) {
            continue;
        }
        int n1 = numbers[n];
        int n2 = numbers[n - 1];
        if (n1 % 2 != n2 % 2) {
            ++arrays[k][0];
            if (arrays[k][1] == -1) {
                arrays[k][1] = n - 1;
            }
        } else {
            if (iMax == -1 || arrays[k][0] > arrays[iMax][0]) {
                iMax = k;
            }
            arrays[k][2] = n;
            ++k;
        }
    }

    cout << arrays[iMax][0] << "\n";
    for (int i = arrays[iMax][1]; i <= arrays[iMax][2]; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
