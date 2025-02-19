#include <stdio.h>

int main() {
    int n = 3;
    int arr_2d[3][3] = { 0 };
    int a = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr_2d[i][j] = a;
        }
        a += 2;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }
}