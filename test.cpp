#include <bits/stdc++.h>
using namespace std;

char a[10][10];

int main(void) {
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf_s(" %c", &a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
입력
LLMM
MMLL

출력
LLMM
MMLL
*/