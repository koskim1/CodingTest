#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6 };
    rotate(v.begin() + 1, v.begin() + 2, v.begin() + 5);
    for (int i : v) cout << i << ' ';

}
/*
1 3 4 5 2 6
*/