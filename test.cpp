#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int alpha[26], cnt;
string s;

// 아스키코드 : 대문자 A = 65, 소문자 a = 97
int main() {
    fastIO();
    
    cin >> s;
    
    // 대문자 소문자 둘다 빈도수 체크해서 alpha[0~25]에 넣어둠
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 97) alpha[s[i] - 65]++;
        else alpha[s[i] - 97]++;
    }

    int max = 0, max_index = 0;

    // max값이랑(여러개인지 나중에 체크해봐야함), max_index(결과값 출력 위해)
    for (int i = 0; i < 26; i++) {
        if (max < alpha[i]) {
            max = alpha[i];
            max_index = i;
        }
    }
    // 가장 많이 사용된 알파벳이 여러개인가 cnt에 체크
    for (int i = 0; i < 26; i++) {
        if (max == alpha[i])cnt++;
    }
    // cnt가 여러개면 ? 출력 아니면 대문자로 출력
    if (cnt > 1) cout << "?";
    else cout << (char)(max_index + 65);

}
