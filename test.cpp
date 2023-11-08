#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    cout << "fibo : " << n << "\n";
    if (n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 5;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << fibo(n) << "\n";
}
/*
fibo : 5
fibo : 4
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
fibo : 2
fibo : 1
fibo : 0
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
5
*/