#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector<int> v(100);

void func(vector<int> &v) {
    v[10] = 7;
}

int main() {
    fastIO();

    
    func(v);
    cout << v[10] << "\n";
    

    string s;
    // 그냥 cin으로 하면 띄어쓰기 순간 씹힘. 그래서 getline으로
    getline(cin, s);
    cout << s;
    
}
