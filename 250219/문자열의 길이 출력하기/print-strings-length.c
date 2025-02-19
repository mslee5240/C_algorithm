#include <stdio.h>
#include <string.h>

int main() {
    char chArr_1[100] = { 0 };
    char chArr_2[100] = { 0 };

    scanf("%s", chArr_1);
    scanf("%s", chArr_2);

    printf("%d", strlen(chArr_1) + strlen(chArr_2));

    return 0;
}