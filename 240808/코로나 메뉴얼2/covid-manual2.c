#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[3] = { 0 };
    char chArr[3] = { 0 };
    
    int cntArr[4] = { 0 };

    for (int i = 0; i < 3; i++) {
        scanf("%c %d%*c", &chArr[i], &nArr[i]);
        if (chArr[i] == 'Y') {
            if (nArr[i] >= 37) {
                ++cntArr[0];
            }
            else {
                ++cntArr[2];
            }
        }
        else {
            if (nArr[i] >= 37) {
                ++cntArr[1];
            }
            else {
                ++cntArr[3];
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        printf("%d ", cntArr[i]);
    }

    if (cntArr[0] >= 2) {
        printf("E");
    }

    return 0;
}