#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sex = 0, age = 0;
    scanf("%d %d%*c", &sex, &age);

    if (sex == 0) {
        if (age >= 19) {
            printf("MAN");
        }
        else {
            printf("BOY");
        }
    }
    else {
        if (age >= 19) {
            printf("WOMAN");
        }
        else {
            printf("GIRL");
        }
    }
    return 0;
}