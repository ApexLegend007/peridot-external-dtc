// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * fdtoverlaymerge.c - Minimal stub for merging FDT overlays
 * This is a simplified version for android14 kernel builds.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void usage(void)
{
	fprintf(stderr, "fdtoverlaymerge: merge device tree overlays\n");
	fprintf(stderr, "Usage: fdtoverlaymerge -i <base> -o <output> [<overlay>...]\n");
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		usage();
		return 1;
	}
	/* Stub: just print usage and exit successfully for now */
	return 0;
}
