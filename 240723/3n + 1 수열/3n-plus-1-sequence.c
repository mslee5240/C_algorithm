#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, cnt = 0;
    scanf("%d", &n);

    while (1) {
        if (n == 1) {
            printf("%d", cnt);
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }

        cnt++;
    }

    // while (1) {
        
    //     if (n % 2 == 0) {
    //         n /= 2;
    //         cnt++;
    //         continue;
    //     }
    //     if (n % 2 == 1 && n != 1) {
    //         n *= 3;
    //         n++;
    //         cnt++;
    //         continue;
    //     }
    //     if (n == 1) {
    //         printf("%d", cnt);
    //         break;
    //     }

    // }
    return 0;
}