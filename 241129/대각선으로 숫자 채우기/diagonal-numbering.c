#include <stdio.h>

int main() {
    // n행 m열
    int n = 0, m = 0;
    int aList[100][100] = { 0 };
    int cnt = 1;

    scanf("%d %d", &n, &m);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (aList[row][col] == 0) {
                int curr_row = row;
                int curr_col = col;

                while (curr_row < n && curr_col >= 0) {
                    aList[curr_row][curr_col] = cnt++;
                    curr_row++;
                    curr_col--;
                }
            }
        }
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", aList[i][j]);
        }
        printf("\n");
    }
    
}