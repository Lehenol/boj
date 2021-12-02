//4948_베르트랑 공준

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
#define SIZE 1000001

void betrandPostulate(int a);

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        betrandPostulate(n);
    }
    return 0;
}
void betrandPostulate(int a) {
    int i, j, b, cnt = 0;
    b = 2 * a;
    //int* arr = (int*)malloc(SIZE);
    int arr[SIZE] = { 0 };
    arr[0] = 1;
    for (i = 2; i <= b; i++) {
        if (arr[i] == 1) continue;
        for (j = i * 2; j <= b; j += i) {
            arr[j] = 1;
        }
        if (i > a) cnt++;
    }
    printf("%d\n", cnt);
}