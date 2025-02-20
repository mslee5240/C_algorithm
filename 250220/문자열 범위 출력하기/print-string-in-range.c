#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    fgets(str, 101, stdin);

    str[10] = '\0';

    printf("%s", &str[2]);

    return 0;
}