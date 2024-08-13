#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int more_500 = 1000, less_500 = 0;
    
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] < more_500 && nArr[i] > 500) {
            more_500 = nArr[i];
        }
        if (nArr[i] > less_500 && nArr[i] < 500) {
            less_500 = nArr[i];
        }
    }

    printf("%d %d\n", less_500, more_500);

    return 0;
}