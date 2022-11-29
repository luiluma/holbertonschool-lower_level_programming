#ifndef LISTS_H
#define LISTS_H

/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct element - linked list
 * 
 * @s: string
 * @long: length string
 * @point: points to next node
 */

typedef struct element
{
    int long;
	char *str;
	struct element *sig;

} list_t;

/*prototype*/

size_t print_list(const list_t *h);
