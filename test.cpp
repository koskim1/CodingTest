#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

typedef long long ll;
int t, n, m, temp;

unordered_map<int, int> mp;

int check(int temp, vector<int>& v) {
    int l = 0, r = v.size() - 1;
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (v[mid] > temp)
            r = mid - 1;
        else if (v[mid] == temp) return 1;
        else l = mid + 1;
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    scanf_s("%d", &t);
    while (t--) {
        vector<int> v;
        scanf_s("%d", &n); for (int i = 0; i < n; i++)scanf_s("%d", &temp), v.push_back(temp);
        sort(v.begin(), v.end());
        scanf_s("%d", &m); for (int i = 0; i < m; i++)scanf_s("%d", &temp), cout << check(temp, v) << "\n";
    }
    return 0;
}
/*
11
11
0
0
100
*/