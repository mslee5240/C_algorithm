#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str_1[101] = { 0 };
    char str_2[101] = { 0 };

    fgets(str_1, 101, stdin);
    fgets(str_2, 101, stdin);

    for (int i = 0; i < strlen(str_1); i++) {
        if (str_1[i] == '\n' || str_1[i] == ' ') {
            continue;
        }
        putchar(str_1[i]);
    }

    for (int i = 0; i < strlen(str_2); i++) {
        if (str_2[i] == '\n' || str_2[i] == ' ') {
            continue;
        }
        putchar(str_2[i]);
    }


    return 0;
}