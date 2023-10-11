#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	/*
	
	 memcpy()
	 
	 void * memcpy ( void * destination, const void * source, size_t num);
	 
	 memcpy()는 어떤 변수의 메모리에 있는 값들을 다른 변수의 " 특정 메모리값 " 으로
	 복사할 때 사용합니다. Array를 깊은 복사할 때 쓰임

	 얕은복사 - 메모리 주소값을 복사한 것이라 복사한 배열을 수정하면 원본 배열이 수정되는 복사방법
	 깊은복사 - 새로운 메모리 공간을 확보해 완전히 복사해 배열을 수정하면 원본 배열은 수정되지 않는 복사방법

	 하지만 memcpy()는 vector에서는 깊은복사가 안됨!!
	 그래서 사실상 Array에서만 동작한다는것을 유의해야함

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