#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int even_sum = 0;
    int triple_sum = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (i % 2 == 1) {
            even_sum += nArr[i];
        }
        if ((i + 1) % 3 == 0) {
            triple_sum += nArr[i];
        }
    } 

    double avg = triple_sum / 3.0;

    printf("%d %.1lf", even_sum, avg);
    
    return 0;
}