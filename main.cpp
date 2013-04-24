/*
    II. 1. a
        2. c
        3. s1 == 'b' && s2 == 'u' &&  s3 == 'n'  
        4.
*/

#include <iostream>

using namespace std;

int show(int k, int P, int a) {

    cout << "k = " << k << endl;

    for (int i = k; i <= a; i++) {
        cout << i << (i == a ? "" : " * ");
    }

    cout << " <= " << P;

    if (k == 1) {
        return 0;
    }

    cout << " <= ";

    for (int i = k - 1; i <= a; i++) {
        cout << i << (i == a ? "" : " * ");
    }
}

int prod(int a, int b) {
    int p = 1;

    for (int i = a; i <= b; i++) {
        p *= i;
    }

    return p;
}

int main()
{
    int a, P;

    cout << "a = ";
    cin >> a;

    cout << "P = ";
    cin >> P;

    if (a > P) {
        cout << "Error: a > P";
        return 0;
    }

    int k = 1;

    for (k = a; k > 0; k--) {
        int p = prod(k, a);

        if (p > P) {
            k++;
            show(k, P, a);
            return 0;
        }
    }

    k = 1;

    show(k, P, a);

    return 0;
}

/*
    III. 1. a
         2.
        #include <iostream>

        using namespace std;
        
        int array[] = {
            49, 23, 21, 17, 12, 7, 5
        };
        
        int search (int s, int d, int x) {
        
            if(s > d) {
                return -1;
            }
        
            int m =(s + d)/2;    
        
            if (x == array[m]) {
                return m;
            }
        
            if (x < array[m]) {
                return search(m + 1, d, x);
            }
        
            return search(s, m - 1, x);
        }
        
        int main() {
        
            cout << search(0, 8, 21);
        
            return 0;
        }

        3. TODO
        
        #include <iostream>

using namespace std;

int main() {

    cout << "n = ";
    cin >> n;

    if (n > 20 || n < 2) {
        cout << "error.";
        return 0;
    }

    int array[20];

    for (int i = 0; i < n; i++) {
        cout << "array[" << i << "] =";
        cin >> array[i];
    }

    int array2[40];
    
    int i = 0;
    int l = 0;

    while (true) {
        if (array[i] % 2 == 0) {
        
        }
    }
    
    return 0;
}

        
*/
