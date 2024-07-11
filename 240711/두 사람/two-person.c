#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a_age = 0, b_age = 0;
    char a_sex = 0, b_sex = 0;
    scanf("%d %c%*c", &a_age, &a_sex);
    scanf("%d %c%*c", &b_age, &b_sex);

    if ((a_age >= 19 && a_sex == 'M') || (b_age >= 19 && b_sex == 'M')) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}