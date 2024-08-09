#include <stdio.h>

// int 범위 내에서 가장 작은 값을 선언하는 방법
// #include <limits.h>
// int max_val = INT_MIN;

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int max_val = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] > max_val) {
            max_val = nArr[i];
        }
    }
    printf("%d", max_val);
    
    return 0;
}