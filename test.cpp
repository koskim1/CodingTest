#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // ���� a, ��� r, ���� n
    int a = 1, r = 2, n = 4;

    vector<int> v;
    cout << a * ((int)pow(r, n) - 1) / (r - 1) << "\n";
    /*
    pow(r, n)�� r�� n���� ����
    �⺻������ �Ϲ��� ����ȯ�� ���� float�������� ������
    �׷��� int�������� ����ȯ�� ���������.
    */
    for (int i = 0; i < n; i++) {
        v.push_back(a);
        a *= r;
    }
    for (int i : v) cout << i << ' ';
}
/*
15
1 2 4 8
*/