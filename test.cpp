#include <bits/stdc++.h>
using namespace std;

/*
    배열 중 가장 큰 요소를 추출하는 함수, max_element입니다.
    이 함수는 이터레이터를 반환하기 때문에 *를 통해 값을 끄집어낼 수 있고 이를 기반으로
    해당 최댓값의 인덱스 또한 뽑아낼 수 있습니다.
    */

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    int a = *max_element(v.begin(), v.end());   // *을 통해 최대 값을 이끌어낸다
    auto b = max_element(v.begin(), v.end());   // 최댓값의 인덱스를 뽑아낸다.
    cout << a << "\n";
    cout << (int)(b-v.begin()) << "\n";         // 의문! 계속헷갈리네 왜 인덱스 뽑아낼때 v.begin()
                                                // 즉 0번째 인덱스를 빼주는거지?
    /*
    
    항상 헷갈렸지만 다시 정리!!
    인덱스를 뽑아낼 때 v.begin()을 빼주는 이유는
    위의 b-v.begin()을 예로 들면

    max_element함수가 반환한 반복자 b와 벡터 v의 시작지점 v.begin() 간의 거리를 계산하는 것이고,
    이 거리는 가장 큰 요소의 인덱스가 됨!

    */
}