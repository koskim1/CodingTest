#include <bits/stdc++.h>
using namespace std;

// ���� : �ԷµǴ� ���ڿ��� ���̴� �ִ� 100
char str[100]; // Bad
char str[101]; // GOOD

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);



/*
���� ��� 100��¥�� ���ڸ� �Է¹޴´�. ���� �̰� string�� �ƴ϶� char[] �� �Ѵٸ� char[101]�� �����ؾ� �մϴ�.

C++, C���� ���ڴ� null�� ����Ǵ� ���� ��Ģ�̹Ƿ� �������� ������ �ι����� ��\0���� �ش��ϴ� ����Ʈ�� �ٽ��ϴ�.
*/
}
