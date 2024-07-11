#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int mid = 0, end = 0, tmp = 0;

    scanf("010-%d-%d%*c", &mid, &end);

    tmp = mid;
    mid = end;
    end = tmp;

    printf("010-%d-%d\n", mid, end);

    return 0;
}