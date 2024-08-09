#include <stdio.h>
#include <stdbool.h>

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


    for (int i = 0; i < n_1; ++i) {
        bool success = true;

        for (int j = 0; j < n_2; ++j) {
            if (i + j >= n_1) {
                success = false;
                break;
            }

            if (n_1_arr[i + j] != n_2_arr[j]) {
                success = false;
                break;
            }
        }

        if (success) {
            printf("Yes");
            return 0;
        }
    }

    printf("No");

    return 0;
}