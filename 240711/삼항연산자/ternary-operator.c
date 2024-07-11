#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int score = 0;
    scanf("%d%*c", &score);

   printf(score == 100 ? "pass\n" : "failure\n");

    return 0;
}