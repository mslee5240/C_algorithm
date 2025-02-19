#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char chArr_1[21] = { 0 };
    char chArr_2[21] = { 0 };

    scanf("%s %s", chArr_1, chArr_2);

    int len_1 = strlen(chArr_1);
    int len_2 = strlen(chArr_2);

    if (len_1 > len_2) {
        printf("%s %d", chArr_1, len_1);
    }
    else if (len_1 < len_2) {
        printf("%s %d", chArr_2, len_2);
    }
    else {
        printf("same");
    }
    
    
    
    
    

    return 0;
}