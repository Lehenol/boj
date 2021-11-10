//달팽이는 올라가고 싶다
#include <stdio.h>

int main(void)
{
    int A, B, V;
    int days = 0;
    scanf("%d %d %d", &A, &B, &V);
    days = (V - B - 1) / (A - B) + 1;

    printf("%d", days);
    return 0;
}