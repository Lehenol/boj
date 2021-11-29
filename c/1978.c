//소수 찾기
#include <stdio.h>

int isPrimeNum(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) c++;
    }
    if (c == 2) return 1;
    else return 0;
}

int main() {
    int n, m, cnt = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if(isPrimeNum(m)) {
            cnt++;
        }
    }
    printf("%d",cnt);
}