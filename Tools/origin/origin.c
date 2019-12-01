#include <stdio.h>

int main(int argc, char **argv) {
	puts("I'm the origin :)");

	for (int i = 1; i < argc; i++)
		printf("%d: %s\n", i, argv[i]);

	return 0;
}

