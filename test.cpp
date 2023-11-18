#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6 };
    int i = 1;
    int temp = v[i];
    v[i] = v[i + 1];
    v[i + 1] = v[i + 2];
    v[i + 2] = v[i + 3];
    v[i + 3] = temp;
    for (int i : v) cout << i << ' ';
}
/*
1 3 4 5 2 6
*/