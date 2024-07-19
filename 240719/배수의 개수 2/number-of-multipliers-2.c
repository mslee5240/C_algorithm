#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0, nInput = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nInput);
        if (nInput % 2 == 1) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}