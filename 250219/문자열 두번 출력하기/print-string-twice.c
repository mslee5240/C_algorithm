#include <stdio.h>

int main() {
    // Please write your code here.
    char chArr[100] = { 0 };
    
    scanf("%s", chArr);

    for (int i = 0; i < 2; i ++) {
        printf("%s\n", chArr);
    }
    
    return 0;
}