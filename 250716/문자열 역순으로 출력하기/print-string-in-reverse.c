#include <stdio.h>

int main() {
    // Please write your code here.
    char strInput[4][20] = { 0 };

    for (int i = 0; i < 4; i++) {
        scanf("%s*%c", strInput[i]);
    }
    
    for (int i = 3; i >=0; i--) {
        printf("%s\n", strInput[i]);
    }
    
    return 0;
}