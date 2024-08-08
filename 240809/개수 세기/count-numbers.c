#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int nArr[100] = { 0 };
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] == m) {
            cnt++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}