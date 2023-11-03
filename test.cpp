#include <bits/stdc++.h>
using namespace std;

/*
구조체라 불리는 struct는 C++에서 제공하는 자료구조가 아닌 개발자의 커스텀한 자료구조를 의미합니다.

커스텀하게 정렬을 추가하고 싶거나 문저에서 여러개의 변수 예를 들어 a, b, c, d, e가 들어간 
자료구조가 필요하다면 struct를 사용해야 합니다.
*/

struct Ralo {
    int a, b;
    double c, d, e;
};

struct Point {
    int y, x;
    Point(int y, int x) : y(y), x(x) {};
    Point() { y = -1; x = -1; }
    bool operator < (const Point& a) const {
        if (x == a.x) return y < a.y;
        return x < a.x;
    }
};

void print(Ralo ralo) {
    cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e
        << "\n";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Ralo ralo = { 1,1,1,1,1 };
    print(ralo);
    vector<Ralo> ret;
    ret.push_back({ 1,2,3,4,5 });
    ret.push_back({ 1,2,3,4,6 });
    ret.push_back({});
    ret.push_back({ 1,3 });
    for (Ralo ralo : ret) {
        print(ralo);
    }
}
