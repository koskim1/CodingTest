#include <bits/stdc++.h>
using namespace std;

/*
����ü�� �Ҹ��� struct�� C++���� �����ϴ� �ڷᱸ���� �ƴ� �������� Ŀ������ �ڷᱸ���� �ǹ��մϴ�.

Ŀ�����ϰ� ������ �߰��ϰ� �Ͱų� �������� �������� ���� ���� ��� a, b, c, d, e�� �� 
�ڷᱸ���� �ʿ��ϴٸ� struct�� ����ؾ� �մϴ�.
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
