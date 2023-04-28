#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: a constant pointer and a first node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p = (list_t*)malloc(sizeof(list_t));
	int cpt = 0;

	p->str = h->str;
	p->len = h->len;
	p->next = h->next;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		cpt++;
		p = p->next;
	}
	free(p);
	return (cpt);
}

