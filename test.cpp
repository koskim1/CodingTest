#include <bits/stdc++.h>
using namespace std;

// �迭�� ���� ���� ������ �����ִ� �Լ��δ� accumulate�� �ֽ��ϴ�.

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n";
    // accumulate( , , ��� ) ���κи�ŭ + �ż� ��� �����µ�?
}