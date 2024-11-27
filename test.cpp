#pragma warning(disable:4996)
#include <bits/stdc++.h>
using namespace std;
#define prev aaa
#define next aaaa
#define y1 aaaaa
const int INF = 987654321;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int n[100004], m[100004];
int k,k2;

int BSearch(int arr[], int target, int low, int high) {
    if (low > high)
        return 0;

    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        return 1;
    }        
    else if (arr[mid] > target)
        return BSearch(arr, target, low, mid - 1);
    else
        return BSearch(arr, target, mid + 1, high);
}

int main() {
    fastIO();
    
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n[i];
    }
    sort(n, n + k);

    cin >> k2;
    for (int i = 0; i < k2; i++) {
        cin >> m[i];   
        // k-1인 이유는 인덱스 위주로 봐야해서 그렇구만
        cout << BSearch(n, m[i], 0, k - 1) << '\n';
    }
}
