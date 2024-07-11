#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double l = 0.0, r = 0.0;
    scanf("%lf %lf%*c", &l, &r);

    if (l >= 1.0 && r >= 1.0) {
        printf("High");
    }
    else if (l >= 0.5 && r >= 0.5) {
        printf("Middle");
    }
    else {
        printf("Low");
    }

    return 0;
}