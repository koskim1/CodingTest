#include <bits/stdc++.h>
using namespace std;

/*
    �迭 �� ���� ���� ��Ҹ� �����ϴ� �Լ�, min_element�Դϴ�. 
    �� �Լ��� ���ͷ����͸� ��ȯ�ϱ� ������ *�� ���� ���� ����� �� �ְ� 
    �̸� ������� �ش� �ּڰ��� �ε��� ���� �̾Ƴ� �� �ֽ��ϴ�.

    */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    int a = *min_element(v.begin(), v.end());
    auto b = min_element(v.begin(), v.end());
    cout << a << "\n";
    cout << (int)(b - v.begin()) << "\n";
}