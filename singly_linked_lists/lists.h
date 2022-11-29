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
 * @len: length string
 * @next: points to next node
 */

typedef struct element
{
    char *str;
    unsigned int len;
    struct element *next;

}list_t;

/*prototype*/

size_t print_list(const list_t *h);
#endif

