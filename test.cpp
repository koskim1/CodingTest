#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 100;
    int b = 2;
    while (n > 1) {
        v.push_back(n % b);
        n /= b;
    }// 0 0 1 0 0 1 1

    if (n == 1)v.push_back(1);
    reverse(v.begin(), v.end());
    // 1 1 0 0 1 0 0 
    for (int a : v) {
        // if (a>=10) �� ������ 16���� ��ȯ�� ���� �ʿ���
        // ( 16���� : 0 ~ F�� ǥ���ϴ� ��� )
        if (a >= 10) cout << char(a + 55);
        else cout << a;
    }
    return 0;
}
/*
���⼭ b�� 3���� �ٲٸ� 10������ 3�������� �ٲٴ� ����� �˴ϴ�. 
�������� �׽����ذ��鼭 ������ �˴ϴ�.
*/