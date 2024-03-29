#include <unistd.h>
#include <stdlib.h>
#include "ft_btree.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

t_btree		*btree_create_node(void *item)
{
	t_btree		*tree;

	if ((tree = (t_btree *)malloc(sizeof(t_btree))))
	{
		tree->left = ((void *)0);
		tree->right = ((void *)0);
		tree->item = item;
	}
	return (tree);
}

int			main(void)
{
	t_btree		*tree_temp;

	tree_temp = btree_create_node("I love cats \n");
	ft_putstr((char *)tree_temp->item);
	return (0);
}