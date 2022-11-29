#ifndef _LISTS_H_
#define _LISTS_H_

/*libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct element - linked list
 * 
 * @str: string
 * @len1: length string
 * @sig: points to next node
 */

typedef struct element
{
    unsigned int len1;
	char *str;
	struct element *sig;

} list_t;

/*prototype*/

size_t print_list(const list_t *h);
#endif

