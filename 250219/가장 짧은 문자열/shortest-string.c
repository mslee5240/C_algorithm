#include <stdio.h>
#include <string.h>

int main() {
    char chArr_1[20] = { 0 };
    char chArr_2[20] = { 0 };
    char chArr_3[20] = { 0 };

    // 안전한 입력을 위해 %19s 사용
    scanf("%19s", chArr_1);
    scanf("%19s", chArr_2);
    scanf("%19s", chArr_3);

    int nArr[3] = { strlen(chArr_1), strlen(chArr_2), strlen(chArr_3) };

    // 배열의 첫 번째 요소를 초기값으로 설정
    int max = nArr[0], min = nArr[0];

    for (int i = 1; i < 3; i++) {
        if (nArr[i] > max) max = nArr[i];
        if (nArr[i] < min) min = nArr[i];
    }

    printf("%d", max - min);
    return 0;
}
