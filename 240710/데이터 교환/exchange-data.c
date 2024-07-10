#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6, c = 7, tmp_1 = 0, tmp_2 = 0;

    tmp_1 = a;
    a = c;
    tmp_2 = c;
    c = b;
    b = tmp_1;

    printf("%d\n%d\n%d", a, b, c);



    return 0;
}