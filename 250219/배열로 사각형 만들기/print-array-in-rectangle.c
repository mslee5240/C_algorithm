#include <stdio.h>

int main() {
    int n = 5;
    int arr_2d[5][5] = { 0 };
    
    for (int i = 0; i < n; i++) {
        arr_2d[0][i] = 1;
        arr_2d[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr_2d[i][j] = arr_2d[i - 1][j] + arr_2d[i][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }
}