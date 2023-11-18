#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6 };
    rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    for (int i : v) cout << i << ' ';

}
/*
6 1 2 3 4 5
*/