#include <bits/stdc++.h>
using namespace std;

// 문제 : 입력되는 문자열의 길이는 최대 100
char str[100]; // Bad
char str[101]; // GOOD

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);



/*
예를 들어 100개짜리 문자를 입력받는다. 또한 이걸 string이 아니라 char[] 로 한다면 char[101]로 선언해야 합니다.

C++, C에서 문자는 null로 종료되는 것이 원칙이므로 마지막에 무조건 널문자인 ‘\0’에 해당하는 바이트가 붙습니다.
*/
}
