#ifndef __ARGSPY_H__
#define __ARGSPY_H__

#include <stdio.h>
#include <unistd.h>

#define FILENAME "argspy.txt"
#define ORIGIN "origin.exe"

#define INIT() g_argc = argc; g_argv = argv;
#define MAX_COMMAND_LENGTH 256

static void print();
static void save_file();
static void run_origin();

#endif
