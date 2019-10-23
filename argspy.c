#include "argspy.h"

static int g_argc;
static char **g_argv;

int main(int argc, char **argv) {
	INIT();

	print();
	save_file();

	return 0;
}

static void print() {
	for (int i = 0; i < g_argc; i++)
		printf("%d: %s\n", i, g_argv[i]);
}

static void save_file() {
	FILE *fp = fopen(FILENAME, "w");
	if (fp == NULL)
		return;

	for (int i = 0; i < g_argc; i++)
		fprintf(fp, "%d: %s\n", i, g_argv[i]);

	fclose(fp);
}
