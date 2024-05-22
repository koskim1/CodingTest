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

int a[26],num,b,c[26];
string s;

int main() {
    fastIO();
    
    fill_n(a, 26, -1);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        // s[i] - 'a' 하면 b => 1
        num = s[i] - 'a';
        // 이렇게 하면 o가 2번나오면 처음위치가 아닌 다음위치로 됨.
        // 어떻게하면 처음위치만 할까        
        if (a[num] == -1) {
            a[num] = b++;
        }
        else b++;
        
    }


    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }

    /*
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";
    return 0;

    만약 없는 문자열을 찾으려 할 경우에는 string::npos가 반환된다.

    npos의 값은 -1로 정의되어있지만, string::npos의 자료형이 unsigned이므로 2의 보수 개념에 의해 
    표현할 수 있는 최대 크기의 양수가 출력된다. 
    이를 방지하기 위해서는 unsigned가 아닌 일반 int형으로 캐스팅을 진행하여 출력하면 된다.

    find를 알았다면 훨씬 쉽게 풀었을 문제였네 머쓱.
    */


}
