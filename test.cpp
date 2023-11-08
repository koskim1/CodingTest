#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<vector<int>> v2(10, vector<int>(10, 0));
vector<int> v3[10];

void go(vector<vector<int>>& v) {
    v[0][0] = 100;
}

void go2(vector<vector<int>>& v) {
    v[0][0] = 1000;
}

void go3(vector<int> v[10]) {
    v[0][0] = 10000;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> temp;
    temp.push_back(0);
    v.push_back(temp);

    v3[0].push_back(0);

    go(v); go2(v2); go3(v3);
    cout << v[0][0] << "\n";
    cout << v2[0][0] << "\n";
    cout << v3[0][0] << "\n";

}
/*
100
1000
10000
*/