#include <stdio.h>

int main()
{
    int n, cnt = 1;
    scanf("%d", &n);
    while(n > 1) {
        n -= 6 * cnt;
        cnt++;
    }
    printf("%d\n",cnt);
}