#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char sym_a = 0, sym_b = 0, sym_c = 0;
    int a = 0, b = 0, c = 0;

    scanf("%c %d%*c", &sym_a, &a);
    scanf("%c %d%*c", &sym_b, &b);
    scanf("%c %d%*c", &sym_c, &c);

    if (sym_a = 'Y' && a >= 37) {
        if ((sym_b = 'Y' && b >= 37) || (sym_c == 'Y' && c >= 37)) {
            printf("E");
        }
        else {
            printf("E");
        }
    }
    else if ((sym_b = 'Y' && b >= 37) && (sym_c == 'Y' && c >= 37)) {
        printf("E");
    }
    else {
        printf("N");
    }


    return 0;
}