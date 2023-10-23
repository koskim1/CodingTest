#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 10; i++) v.push_back(i);
    for (int a : v) cout << a << " ";
    cout << "\n";
    v.pop_back();

    for (int a : v)cout << a << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 3);
    
    for (int a : v)cout << a << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end()) cout << "not found" << "\n";

    fill(v.begin(), v.end(), 10);
    for (int a : v)cout << a << " ";
    cout << "\n";
    v.clear();
    cout << "아무것도 없을까?\n";
    for (int a : v)cout << a << " ";    // ㅇㅇ 아무것도 없음
    cout << "\n";

    /*
        push_back()
        : vector의 뒤에서부터 요소를 더합니다. 참고로 push_back()과 같은 기능을 하는
        emplace_back()도 있습니다.

        pop_back()
        vector의 맨 뒤의 요소를 지웁니다.

        erase()
        erase로 한 요소만 지운다면 erase(위치)로 쓰이지만 [from. to) 로 지우고 싶다면
        erase[from,to]를 통해 지웁니다.

        clear()
        vector의 모든 요소를 지웁니다.

        fill(from, to , value)
        vector내의 value값을 할당하고 싶다면 fill을 써서 채웁니다. 보통 이를 ~~ 한 값으로
        초기화라고 부릅니다. [from, to)구간에 value를 초기화 해야합니다.

        범위기반 for 루프
        C++11부터 범위기반 for루프가 추가되어서 이를 쓸 수 있습니다. vector만 쓸 수 있는 것은
        아니고 순회할 수 있는 컨테이너인 vector, Array, map 등도 사용가능합니다.
        문법은 for(<해당 컨테이너에 들어있는 타입> 임시변수명 : 컨테이너 )

        예로들어
        for(int a : v )
        이는
        for(int a = 0 ; a < v.size(); a++) v[a] 와 같은 의미입니다.
        
        vector의 정적할당
        vector라고 해서 무조건 크기가 0인 빈 vector을 만들어 동적할당으로 요소를 추가하는 것은 아님.
        애초에 크기를 정해놓거나 해당 크기에 대한 어떤 값으로 초기화 해놓고 시작할 수도 있음.
    */

    // 2차원 배열
    // vector를 이용한 2차원 배열을 만드는 3가지 방법입니다.
    vector<vector<int>> v;
    vector<vector<int>> v2(10, vector<int>(10, 0));
    vector<int> v3[10];

    for (int i = 0; i < 10; i++) {
        vector<int> temp;
        v.push_back(temp);
    }
}