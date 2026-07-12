#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        int val;

        if (i % 2 == 1)
            val = 1;      // Odd row starts with 1
        else
            val = 0;      // Even row starts with 0

        for (int j = 1; j <= i; j++) {
            cout << val << " ";
            val = 1 - val;   // Toggle between 0 and 1
        }

        cout << endl;
    }

    return 0;
}