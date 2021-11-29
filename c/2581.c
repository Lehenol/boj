//소수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int primeNumArr(int m, int n) {
    int cnt = 0, sum = 0, min = 10000;
    for (int i = n; i >= m; i--) {
        int flag = 0;
        for (int j = 1; j <= i; j++) {
            
            if (i % j == 0) flag++;
        }
        if (flag == 2) {
            cnt++;
            sum += i;
            if (min > i) min = i;
        }
    }
    if (cnt == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min);
    }
}

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    primeNumArr(m, n);
}