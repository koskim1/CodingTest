#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

/*
* 
bits/stdc++.h는 모든 라이브러리를 로드하기 때문에 다른 라이브러리에서 전역변수로 쓰고
있는 변수명을 쓰지 못합니다.
따라서 해당 변수명 같은 경우 그럴 경우에는 define을 써주어야 합니다. define을 걸어서
다른 임의의 문자열로 바꾸어 버린다음 다음 코드처럼 구축하면 됩니다.

#define y1 xoxoxoxo

대표적으로 쓰지 못하는 변수명으로는 다음과 같습니다.
● y1
● time
● prev
● next
예시는 다음과 같습니다.

#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
int prev[4];
int main() {
    cout << prev[0] << '\n';
    return 0;
}

또한 보통 함수로 사용되는 이름이나 매개변수로 들어가는 이터레이터의 이름 등은
define을 걸어도 쓰지 못합니다. 즉, 해당 부분은 변수명으로 선언하면 안됩니다.
예를 들어 다음코드에서 주석처리를 해제해서 sort를 하게 되면 에러가 발생됩니다. sort의
end라는 이터레이터를 사용하기 때문이죠.

#include <bits/stdc++.h>
using namespace std;
#define end aaa
vector<int> v;
int main() {
    for(int i : {1, 2, 3, 4, 5}) v.push_back(i);
    //sort(v.begin(), v.end());
}

*/
}