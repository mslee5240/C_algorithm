#include <stdio.h>
#include <limits.h>
// int 가장 큰 수 선언하는 법
// #include <limits.h>
// int min_val = INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[100] = { 0 };
    int min_val = INT_MAX;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] < min_val) {
            min_val = nArr[i];
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        if (min_val == nArr[i]) {
            ++cnt;
        }
    }

    printf("%d %d", min_val, cnt);
    
    return 0;
}