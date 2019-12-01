#include "argspy.h"

static int g_argc;
static char **g_argv;

int main(int argc, char **argv) {
	puts("ARGuments SPY");
	INIT();

	print();
	save_file();
	run_origin();

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

static void run_origin() {
	if (access(ORIGIN, X_OK) == -1)
		return;

	char cmd[MAX_COMMAND_LENGTH] = ORIGIN;
	for (int i = 1; i < g_argc; i++)
		snprintf(cmd, MAX_COMMAND_LENGTH, "%s %s", cmd, g_argv[i]);

	system(cmd);
}

