#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	/*
	
	 memcpy()
	 
	 void * memcpy ( void * destination, const void * source, size_t num);
	 
	 memcpy()�� � ������ �޸𸮿� �ִ� ������ �ٸ� ������ " Ư�� �޸𸮰� " ����
	 ������ �� ����մϴ�. Array�� ���� ������ �� ����

	 �������� - �޸� �ּҰ��� ������ ���̶� ������ �迭�� �����ϸ� ���� �迭�� �����Ǵ� ������
	 �������� - ���ο� �޸� ������ Ȯ���� ������ ������ �迭�� �����ϸ� ���� �迭�� �������� �ʴ� ������

	 ������ memcpy()�� vector������ �������簡 �ȵ�!!
	 �׷��� ��ǻ� Array������ �����Ѵٴ°��� �����ؾ���

	*/
	int v[3] = { 1, 2, 3 };
	int ret[3];
	memcpy(ret, v, sizeof(v));
	cout << ret[1] << "\n";
	ret[1] = 100;
	cout << ret[1] << "\n";
	cout << v[1] << "\n";
	return 0;
}