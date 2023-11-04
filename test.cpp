#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
priority_queue<int> pq2; // 내림차순
priority_queue<int, vector<int>, less<int>> pq3; // 내림차순

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 5; i >= 1; i--) {
        pq.push(i); pq2.push(i); pq3.push(i);
    }
    while (pq.size()) {
        cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << "\n";
        pq.pop(); pq2.pop(); pq3.pop();
    }

}
/*
1 : 5 : 5
2 : 4 : 4
3 : 3 : 3
4 : 2 : 2
5 : 1 : 1
*/



// 이건 구조체를 담은 우선순위큐 ( 구조체도 우선순위 큐로 사용 가능해~! )
//#include <bits/stdc++.h>
//using namespace std;
//
//struct Point {
//    int y, x;
//    Point(int y, int x) : y(y), x(x) {}
//    Point() { y = -1; x = -1; }
//    bool operator < (const Point& a) const {
//        return x < a.x;
//    }
//};
//
//priority_queue<Point> pq;
//
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    pq.push({ 1, 1 });
//    pq.push({ 2, 2 });
//    pq.push({ 3, 3 });
//    pq.push({ 4, 4 });
//    pq.push({ 5, 5 });
//    pq.push({ 6, 6 });
//    cout << pq.top().x << "\n";
//
//}
/