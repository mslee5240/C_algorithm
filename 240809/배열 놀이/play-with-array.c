#include <stdio.h>

int main() {
    int n = 0, q = 0;
    scanf("%d %d%*c", &n, &q);

    int nArr[100] = { 0 };
    for (int i = 0; i < n; ++i) {
        scanf("%d%*c", &nArr[i]);
    }

    
    for (int i = 0; i < q; ++i) {
        int qArr[3] = { 0 };
        for (int j = 0; j < 3; ++j) {
            scanf("%d%*c", &qArr[j]);
            if ((qArr[0] == 1 || qArr[0] == 2) && j == 1) {
                break;
            }
        }
        if (qArr[0] == 1) {
            printf("%d\n", nArr[qArr[1] - 1]);
        }
        else if (qArr[0] == 2) {
            int idx = 0;
            for (int j = 0; j < n; ++j) {
                if (qArr[1] == nArr[j]) {
                    idx = j + 1;
                    break;
                }
            }
            printf("%d\n", idx);
        }
        else {
            for (int j = qArr[1] - 1; j < qArr[2]; ++j) {
                printf("%d\n", nArr[j]);
            }
        }
    }

    return 0;
}