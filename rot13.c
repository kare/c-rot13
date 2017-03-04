#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/rot13
int main() {
	const int rot = 13;
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			if (c + rot <= 'z') {
				putchar(c + rot);
			} else {
				putchar(c - rot);
			}
		} else if (c >= 'A' && c <= 'Z') {
			if (c + rot <= 'Z') {
				putchar(c + rot);
			} else {
				putchar(c - rot);
			}
		} else {
			putchar(c);
		}
	}

	return EXIT_SUCCESS;
}
