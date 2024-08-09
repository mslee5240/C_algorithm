#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n_1 = 0, n_2 = 0;
    scanf("%d %d", &n_1, &n_2);

    int n_1_arr[100] = { 0 };
    int n_2_arr[100] = { 0 };

    for (int i = 0; i < n_1; ++i) {
        scanf("%d", &n_1_arr[i]);
    }

    for (int i = 0; i < n_2; ++i) {
        scanf("%d", &n_2_arr[i]);
    }

    int flag = 0;
    for (int i = 0; i <= n_1 - n_2; ++i) {
        if (n_1_arr[i] == n_2_arr[0]) {
            for (int j = 1; j < n_2; ++j) {
                if (n_1_arr[i + j] == n_2_arr[j]) {
                    flag = 1;
                    continue;
                }
                else {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }


    return 0;
}