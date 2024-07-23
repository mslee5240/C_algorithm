#include <stdio.h>
// C에서 true / false 라는 bool type을 이용하기 위해서는 
// #include <stdbool.h>를 꼭 적어주셔야 함
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    bool satisfied = false;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            satisfied = true;
            break;
        }
    }

    if (satisfied == true) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}