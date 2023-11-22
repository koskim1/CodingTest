#include <bits/stdc++.h>
using namespace std;

double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
double b = 1;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double value = a - b;
    cout << value << "\n";
    if (value < 1e-9) {
        cout << "clear!\n";
    }

/*
-1.11022e-16
clear!
*/
}
