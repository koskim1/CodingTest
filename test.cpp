#include <bits/stdc++.h>
using namespace std;

int a[3] = { 1,2,3 };
int a2[] = { 1,2,3,4 };
int a3[10];

const int mxy = 3;
const int mxx = 4;

// int a[mxy][mxx];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << '\n';
    for (int i : a) cout << i << " ";

    cout << '\n';

    for (int i = 0; i < 4; i++)  cout << a2[i] << " ";
    cout << '\n';
    for (int i : a2) cout << i << " ";

    for (int i = 0; i < 10; i++) a3[i] = i;
    cout << '\n';
    for (int i : a3) cout << i << " ";
    cout << '\n';

    //for (int i = 0; i < mxy; i++) {
    //    for (int j = 0; j < mxx; j++) {
    //        a[i][j] = (i + j);
    //    }
    //}
    ////good
    //for (int i = 0; i < mxy; i++) {
    //    for (int j = 0; j < mxx; j++) {
    //        cout << a[i][j] << ' ';
    //    }
    //    cout << '\n';
    //}

    ////bad
    //for (int i = 0; i < mxx; i++) {
    //    for (int j = 0; j < mxy; j++) {
    //        cout << a[j][i] << ' ';
    //    }
    //    cout << '\n';
    //}

    ///*
    //    2차원 배열을 만들었고 출력한 예제입니다.
    //    이 때 중요한 점이 있는데 앞의 코드에 good과 bad코드에 주목해주세요.
    //    첫번째 차원 >> 2번째 차원 순으로 탐색하는게 성능이 좋습니다.
    //    이는 C++에서 캐시를 첫번째 자원(여기서는 y)를 기준으로 하기 때문에 캐시관련
    //    효율성 떄문에 탐색을 하더라도 순서를 지켜가며 해주는게 좋음.
    //*/
}