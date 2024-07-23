#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    bool satisfied = true;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            satisfied = false;
        }
    }

    if (satisfied = true) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}