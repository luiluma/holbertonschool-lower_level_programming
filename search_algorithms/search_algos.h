#ifndef _SEARCHALGOS_H
#define _SEARCHALGOS_H
/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* PROTOTYPE */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
