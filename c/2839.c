//2839_설탕 배달

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, cnt, left;
	scanf("%d", &n);
	cnt = n / 5;
	while (cnt >= 0) {
		left = n - cnt * 5;
		if (left % 3 == 0) {
			cnt += left / 3;
			break;
		}
		cnt--;
	}
	printf("%d\n", cnt);
}