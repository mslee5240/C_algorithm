#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    
    return 0;
}