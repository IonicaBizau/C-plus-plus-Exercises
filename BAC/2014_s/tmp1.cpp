#include <iostream>
#include <string.h>

using namespace std;

int main () {

    char str[] = "Hello World";
    cout << strchr(str, 'W') + 1;
    return 0;
}
