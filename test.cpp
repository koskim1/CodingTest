#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    a += 10;
    cout << a << "\n";
    return a + b;
}

vector<int> v(3, 0);
void go(vector<int> v) {
    v[1] = 100;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 1;
    int b = 2;
    int sum = add(a, b);
    cout << a << '\n';


    // vector�� ���� ���� ȣ���� �ϸ� �����ص� �ƹ��� �ݿ� ���� ����. ���� ��������.
    go(v);
    for (int i : v) cout << i << "\n";
}