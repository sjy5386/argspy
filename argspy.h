#ifndef __ARGSPY_H__
#define __ARGSPY_H__

#include <stdio.h>

#define FILENAME "argspy.txt"

#define INIT() g_argc = argc; g_argv = argv;

static void print();
static void save_file();

#endif
