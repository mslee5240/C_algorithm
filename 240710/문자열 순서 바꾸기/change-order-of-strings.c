#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char s[101], t[101], tmp[101];

    scanf("%s %s%*c", s, t);

    for (int i = 0; i < 101; ++i) {
        tmp[i] = s[i];
        s[i] = t[i];
        t[i] = tmp[i];

        if (s[i] == '\0' || t[i] == '\0') {
            break;
        }
    }

    printf("%s\n%s", s, t);

    return 0;
}