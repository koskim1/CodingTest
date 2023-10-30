#include <bits/stdc++.h>
using namespace std;

multiset<int> s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 5; i >= 1; i--) {
        s.insert(i);
        s.insert(i);
    }

    for (int it : s) cout << it << " ";
    cout << "\n";

}
