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
/*
배열의 성질

1. O(1)에 k번째 원소를 확인/변경 가능
2. 추가적으로 소모되는 메모리의 양이 거의 없음.
3. Cache hit rate가 높음. (메모리상의 데이터들이 붙어있으니깐)
4. 메모리 상에 연속한 구간을 잡아야 해서 할당에 제약이 걸림.
*/

void insert(int idx, int num, int arr[], int& len) {
    for (int i = len; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int& len) {
    len--;
    for (int i = idx; i < len; i++) {
        arr[i] = arr[i + 1];
    }    
}

void printArr(int arr[], int& len) {
    for (int i = 0; i < len; i++)cout << arr[i] << ' ';
    cout << "\n\n";
}

void insert_test() {
    cout << "***** insert_test *****\n";
    int arr[10] = { 10, 20, 30 };
    int len = 3;
    insert(3, 40, arr, len); // 10 20 30 40    
    printArr(arr, len);
    insert(1, 50, arr, len); // 10 50 20 30 40
    printArr(arr, len);
    insert(0, 15, arr, len); // 15 10 50 20 30 40
    printArr(arr, len);
}

void erase_test() {
    cout << "***** erase_test *****\n";
    int arr[10] = { 10, 50, 40, 30, 70, 20 };
    int len = 6;
    erase(4, arr, len); // 10 50 40 30 20
    printArr(arr, len);
    erase(1, arr, len); // 10 40 30 20
    printArr(arr, len);
    erase(3, arr, len); // 10 40 30
    printArr(arr, len);
}

int main() {
    fastIO();

    insert_test();
    erase_test();
}
