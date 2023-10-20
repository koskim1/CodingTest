#include <bits/stdc++.h>
using namespace std;

// 중복된 요소 제거 로직



/*
    unique 함수는 연속된 범위에서 중복된 요소를 찾아서 맨 뒤로 보내고 
    그것을 가리키는 위치를 반환합니다.

    따라서 unique 함수의 반환값은 중복값들이 뒤로 모여있는 벡터에서 중복값들을 
    제외한 벡터의 끝을 가리키는 반복자입니다.
*/


/*
    unique()는 범위안에 있는 요소 중 앞에서부터 서로를 비교해가며 중복되는
    요소를 제거하고 나머지 요소들은 삭제하지 않고 그대로 두는 함수입니다.
    O(n)의 시간 복잡도를 가집니다.

    // 유니크는 중복을 제거한 벡터의 끝 위치를 반환합니다.
    // 중복되지 않은 요소를 채운후 이터레이터를 반환!!하는 뜻이기도함
*/


//vector<int> v;
//map<int, int> mp;

vector<int> v{ 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 요건 vector<int> v;쓴거		

//for (int i = 1; i <= 5; i++) {
//    v.push_back(i);
//    v.push_back(i);
//}
//for (int i : v) cout << i << " ";
//cout << "\n";
//// 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
//auto it = unique(v.begin(), v.end());
//cout << it - v.begin() << '\n';
//// 앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
//for (int i : v) cout << i << " ";
//cout << "\n";

//---------------------------------------------------------

// 요건 map쓴거

//vector<int> v{ 1,1,2,2,3,3 };
//for (int i : v) {
//    if (mp[i]) {
//        continue;
//    }
//    else {
//        mp[i] = 1;
//    }
//}

//vector<int>  ret;
//for (auto it : mp) {
//    ret.push_back(it.first);
//}
//for (int i : ret)cout << i << '\n';

// -----------------------------------------------------

// vector<int> v{ 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 } 쓴거
//                1  2  3  5  6  7  8  9  7  8  9

/*
auto it = unique(v.begin(), v.end());
for (int i : v) cout << i << " ";
cout << '\n';

*/

// 앞에서부터 중복되는 거를 찾아가지고 없애기 때문에
// sort를 써야함

//sort 버전
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i : v)cout << i << " ";
    cout << "\n";
    // 유니크는 중복을 제거한 벡터의 끝 위치를 반환합니다.
    // 중복되지 않은 요소를 채운후 이터레이터를 반환!!하는 뜻이기도함
}