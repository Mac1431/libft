#include "link_list.h"

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

int		main(void)
{
	int		i;
	int		tab2[5];
	int		tab[5];
	int		tab1[5];

	t_list	*head;
	t_list	*list1;
	t_list	*list2;
	
	list1 = NULL;
	head = NULL;
	list2 = NULL;

	tab[0] = 42;
	tab[1] = 66;
	tab[2] = 11;
	tab[3] = 2;
	tab[4] = 34;
	
	tab1[0] = 123;
	tab1[1] = 166;
	tab1[2] = 111;
	tab1[3] = 121;
	tab1[4] = 134;

	tab2[0] = 10342;
	tab2[1] = 12364;
	tab2[2] = 154652;
	tab2[3] = 609386;
	tab2[4] = 12334;

	i = 0;
	while (i < 5)
	{
		ft_pushfront_node(&head, &tab[i]);
		ft_pushback_node(&list1, &tab1[i]);
		ft_pushback_node(&list2, &tab2[i]);
		i++;
	}
	ft_putstr("\nList[1]:\n\n");
	ft_print_lst(head);
	ft_putstr("\nList[2]:\n\n");
	ft_print_lst(list1);
	ft_putstr("\nList[3]:\n\n");
	ft_print_lst(list2);
	ft_putstr("\nLinked_list[1][2][3]:\n\n");
	ft_lists_linker(&head, list1);
	ft_lists_linker(&head, list2);
	ft_print_lst(head);
	free(list1);
	free(head);
	return (0);
}