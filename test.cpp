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
    �ߺ���� �ȵ�
    ������ �ȵ�.
    aba : 1
    aaa : 1
    bcd : 1
*/