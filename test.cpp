#include <bits/stdc++.h>
using namespace std;

int a[3] = { 1,2,3 };
int a2[] = { 1,2,3,4 };
int a3[10];

const int mxy = 3;
const int mxx = 4;

// int a[mxy][mxx];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << '\n';
    for (int i : a) cout << i << " ";

    cout << '\n';

    for (int i = 0; i < 4; i++)  cout << a2[i] << " ";
    cout << '\n';
    for (int i : a2) cout << i << " ";

    for (int i = 0; i < 10; i++) a3[i] = i;
    cout << '\n';
    for (int i : a3) cout << i << " ";
    cout << '\n';

    //for (int i = 0; i < mxy; i++) {
    //    for (int j = 0; j < mxx; j++) {
    //        a[i][j] = (i + j);
    //    }
    //}
    ////good
    //for (int i = 0; i < mxy; i++) {
    //    for (int j = 0; j < mxx; j++) {
    //        cout << a[i][j] << ' ';
    //    }
    //    cout << '\n';
    //}

    ////bad
    //for (int i = 0; i < mxx; i++) {
    //    for (int j = 0; j < mxy; j++) {
    //        cout << a[j][i] << ' ';
    //    }
    //    cout << '\n';
    //}

    ///*
    //    2���� �迭�� ������� ����� �����Դϴ�.
    //    �� �� �߿��� ���� �ִµ� ���� �ڵ忡 good�� bad�ڵ忡 �ָ����ּ���.
    //    ù��° ���� >> 2��° ���� ������ Ž���ϴ°� ������ �����ϴ�.
    //    �̴� C++���� ĳ�ø� ù��° �ڿ�(���⼭�� y)�� �������� �ϱ� ������ ĳ�ð���
    //    ȿ���� ������ Ž���� �ϴ��� ������ ���Ѱ��� ���ִ°� ����.
    //*/
}