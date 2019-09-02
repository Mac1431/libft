#include "link_list.h"

/* This function allocates memory on the heap for the new node*/

t_list	*ft_create_node(void *data)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = data;
	node->next = NULL;
	return (node);
}

/*This function inserts a new node in front of the current list*/
				/*To be modified*/

void	ft_pushfront_node(t_list **lst, void *data)
{
	t_list *tmp;

	if (!lst)
	{
		*lst = ft_create_node(data);
		return ;
	}
	else
	{
		tmp = ft_create_node(data);
		tmp->next = *lst;
		*lst = tmp;
	}
}

/*This fnction inserts a new node at the the back of the current list*/

void	ft_pushback_node(t_list **lst, void *data)
{
	t_list *tmp;

	tmp = NULL;
	if (*lst == NULL)
	{
		*lst = ft_create_node(data);
		return ;
	}
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ft_create_node(data);
	}
	
}

/* This function displays the nodes starting with the Head node */
					/* To be modified*/

void	ft_print_lst(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!lst)
		return ;
	else
	{
		tmp = lst;
		while (tmp != NULL)
		{
//			ft_putnbr(*(int *)tmp->content);
//			ft_putnbr(i + 1);
			printf("Node[%d] = %d\n", i + 1, *(int *)tmp->content);
			tmp = tmp->next;
			i++;
		}
	}
}

/*This function joins two lists together*/

void	ft_lists_linker(t_list **begin_lst, t_list *lst)
{
	t_list 	*tmp;

	tmp = NULL;
	if (*begin_lst == NULL || lst == NULL)
		return ;
	else
	{
		tmp = (*begin_lst)->next;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = lst;
	}
}
