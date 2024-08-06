#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    int passCnt = 0;

    for (int i = 0 ; i < n; ++i) {
        int sum_val = 0;
        int nInput = 0;
        

        for (int j = 0; j < 4; ++j) {
            scanf("%d", &nInput);
            sum_val += nInput;
        }

        if ((double)sum_val / 4 >= 60) {
            printf("pass\n");
            passCnt++;
        }
        else {
            printf("fail\n");
        }
    }

    printf("%d", passCnt);

    return 0;
}