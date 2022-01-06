//10809_알파벳 찾기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[101];
	int index, j;
	scanf("%s", s);
	for (char i = 'a'; i <= 'z'; i++) {
		index = -1;
		j = 0;
		while (s[j] != NULL) {
			if (i == s[j]) {
				index = j;
				break;
			}
			j++;
		}
		printf("%d", index);
		if (i < 'z') printf(" ");
	return 0;
}
