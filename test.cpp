#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6 };
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v) cout << i << ' ';

}
/*
2 3 4 5 6 1
*/