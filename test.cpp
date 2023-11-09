#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << "정렬되어있지 않은 배열기반\n";
    int a[] = { 1,3,2 };
    do {
        for (int i : a) cout << i << " ";
        cout << "\n";
    } while (next_permutation(a, a + 3));
    cout << "정렬된 배열기반\n";
    int b[] = { 1,2,3 };
    do {
        for (int i : b)cout << i << " ";
        cout << "\n";
    } while (next_permutation(b, b + 3));

}
/*
정렬되어있지 않은 배열기반
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
정렬된 배열기반
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1

*/