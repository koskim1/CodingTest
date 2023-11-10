#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> a = { 2,1,3 };
    sort(a.begin(), a.end());

    do {
        for (int i : a) cout << i << " ";
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));

}