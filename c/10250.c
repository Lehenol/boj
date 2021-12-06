//10250_ACM 호텔
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, h, w, n, i;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		int floor, room;
		n--;
		floor = (n % h + 1) * 100;
		room = n / h + 1;
		printf("%d\n", floor + room);
	}
}