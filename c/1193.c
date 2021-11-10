//분수찾기
#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    int line = 0;

    while (X - line > 0) {
        X = X - line;
        line++;
    }

    int a, b; // a : 분자, b : 분모
    if (line % 2) {
        a = line + 1 - X;
        b = X;
    }
    else {
        a = X;
        b = line + 1 - X;
    }

    printf("%d/%d\n", a, b);

    return 0;
}