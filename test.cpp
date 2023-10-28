#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<string, int> umap;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["aba"] = 1;
    for (auto it : umap) {
        cout << it.first << " : " << it.second << "\n";
    }

}
/*
    중복허용 안됨
    정렬이 안됨.
    aba : 1
    aaa : 1
    bcd : 1
*/