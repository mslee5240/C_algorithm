#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[101] = { 0 };
    char ch = 0;

    fgets(str, 101, stdin);
    scanf("%c", &ch);

    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        if (str[i] == '\n') {
            break;
        }
        if (str[i] == ch) {
            cnt++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}