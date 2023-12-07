// 나만의 틀린 풀이법임
/*첫번째 실수
a* b 이렇게 예시 주어졌다 해서 당연히 한글자만 로직이 되는거 아님
ab* ab처럼 두글자도 나올수있음 이걸 생각못한 나는 처음부터 틀림 ㅋ;
*/
#include <bits/stdc++.h>
using namespace std;

// N은 1이상 100이하 정수
int N;
// 카운팅 해야하니. begin, end에 cnt[] ++ 해주면 될듯?
// 찾아보니 string에는 .front() 맨앞 , .back() 맨뒤 이게 있네
string s, ex, res;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	cin >> ex;
	char a = ex.front();
	char b = ex.back();
	if (N >= 1 && N <= 100) {
		for (int i = 0; i < N; i++) {
			cin >> s;
			for (int i = 0; i < 1; i++) {
				if (s.front() == a && s.back() == b) {
					cout << "DA";
				}
				else {
					cout << "NE";
				}
			}
		}
	}
}