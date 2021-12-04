//9020_골드바흐 추측

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10001

int main() {
    int n, m, i, j, k;
    int arr[SIZE] = { 1, 1, 0 };
    for (i = 2; i <= SIZE; i++) {
        if (arr[i] == 1) continue;
        for (j = i * 2; j <= SIZE; j += i) {
            arr[j] = 1;
        }
    }
    scanf("%d", &n);
    for (k = 0; k < n; k++) {
        scanf("%d", &m);
        int a, b, min = 10000;
        for (i = m / 2; i < m; i++) {
            j = m - i;
            if ((!arr[i] && !arr[j]) && (i + (j) == m) && (i - j < min)) {
                a = i;
                b = j;
                min = a - b;
            }
        }
        printf("%d %d\n", b, a);
    }
    return 0;
}