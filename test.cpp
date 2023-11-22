#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

/*
# 입출력 싱크

입출력 싱크를 풀어서 cin, cout의 속도를 빠르게 설정하는 방법이 있습니다. 시간초과가 났을 때 다음코드처럼 구축한다면 시간초과가 통과하는 경우도 있습니다.


ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


C++에서 대표적인 입출력 함수로는 cin, sout, scanf, printf가 있고 이는 시스템콜관련 함수이므로 같이 쓰일 때는 입출력싱크를 맞춰주어야 합니다.

보통은 cin, cout과 scanf, printf중 scanf, printf가 빠릅니다. 왜냐하면 cin, cout은 c라이브러리인 stdio의 버퍼와 동기화하느라 시간을 소비하기 때문이죠.

이 때 앞의 코드처럼 싱크를 해제하여 버퍼 동기화를 하지 않게 하여 cin, cout의 구동속도를 빠르게 해줄 수 있습니다. 하지만 이렇게 했을 때 반드시!! cin, cout를 쓸 때 scanf, printf를 쓰지 말아야 합니다.

앞의 코드를 쓴다면 반드시 cin, cout만 써야 합니다.
*/
}
