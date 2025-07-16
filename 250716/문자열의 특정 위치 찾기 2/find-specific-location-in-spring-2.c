#include <stdio.h>

int main() {
    // Please write your code here.
    char cInput;
    scanf("%c*%c", &cInput);

    char fruites[5][10] = { "apple", "banana", "grape", "blueberry", "orange" };

    int nCount = 0;

    for (int i = 0; i < 5; ++i) {
        for (int j = 2; j <= 3; j++) {
            if (fruites[i][j] == cInput) {
                nCount++;
                printf("%s\n", fruites[i]);
                break;
            }
        }
    }
    printf("%d", nCount);

    return 0;
}