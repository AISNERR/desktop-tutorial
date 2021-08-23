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
	while (*str)
		write(1, str++, 1);
}

 

t_btree	*btree_create_node(void *item)
{
	t_btree		*tree;

	tree = (t_btree *)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = ((void *)0);
		tree->right = ((void *)0);
		tree->item = item;
	}
	return (tree);
}

 

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		(*applyf)(root->item);
		if (root->left)
			btree_apply_prefix(root->left, applyf);
		if (root->right)
			btree_apply_prefix(root->right, applyf);
	}
}

int			main(void)
{
	t_btree		*tree_temp;

	tree_temp = btree_create_node("root \n");
	tree_temp->left = btree_create_node("\t one children  \n");
	tree_temp->right = btree_create_node("\t two children \n");

	tree_temp->left->left = btree_create_node("\t\t\t first parent \n");
	tree_temp->left->right = btree_create_node("\t\t\t second parent \n");
	
	tree_temp->right->left = btree_create_node("\t\t\t first parent \n");
	tree_temp->right->right = btree_create_node("\t\t\t second parent \n");
	
	btree_apply_prefix(tree_temp, (void *)&ft_putstr);
	return (0);
}
