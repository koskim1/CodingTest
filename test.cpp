#include <bits/stdc++.h>
using namespace std;

// 배열의 합을 쉽고 빠르게 구해주는 함수로는 accumulate가 있습니다.

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n";
    // accumulate( , , 요기 ) 요기부분만큼 + 돼서 결과 나오는듯?
}