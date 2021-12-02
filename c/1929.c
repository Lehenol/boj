#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000001

int main() {
    int m, n, i, j;
    int* arr = (int*)malloc(SIZE);
    //int arr[SIZE] = {1};

    scanf("%d %d", &m, &n);

    for (i = 2; i <= n; i++) {
        if (arr[i] == 1) continue;

        for (j = i * 2; j <= n; j += i) {
            arr[j] = 1;
        }
        if (i >= m) printf("%d\n", i);
    }
    return 0;
}