#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m = 0;
    scanf("%d", &m);

    for (int i = 0; i < m; ++i) {
        int n = 0, cnt = 0;
        scanf("%d", &n);
        while (n != 1) {
            if (n % 2) {
            n = n * 3 + 1;
            }
            else {
                n /= 2;
            }
            ++cnt;
        }
        printf("%d\n", cnt);
    }
    
    return 0;
}