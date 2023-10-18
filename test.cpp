#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    memcpy()와 똑같은 동작을 하는 함수임. vector와 Array 모두 쓰일 수 있음
    copy (InputIterator first, InputIterator last, OutputIterator result)

    만약 vector v를 ret에다가 옮기고 싶다면 다음과 같이 하면 됨.
    v : 복사당하는 vector / ret : 복사하는 vector
    copy(v.begin(), v.end(), ret.begin());

    */
    //------------------------------------------------------------------------------------------
    // vector<> 버전
    //vector<int> v{ 1, 2, 3 };
    //vector<int> ret(3);
    //copy(v.begin(), v.end(), ret.begin());
    //cout << ret[1] << "\n";
    //ret[1] = 100;
    //cout << ret[1] << "\n";
    //cout << v[1] << "\n";
    // vector에서는 깊은복사가 돼서 ret을 수정하더라도 v에는 아무런 영향을 안줌


    //------------------------------------------------------------------------------------------
    // array() 버전 ( 깊은 복사 )
    int v[3] = { 1,2,3 };
    int ret[3];
    copy(v, v + 3, ret);
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";

    /*
    이로써 copy()는 vector든 Array든 모두 깊은복사 인것을 알 수 있고
    memcpy()는 Array에서만 깊은복사 vector에서는 얕은복사(원본도 수정됨)가 이루어진다.
    */
}
