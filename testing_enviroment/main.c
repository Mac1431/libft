#include "link_list.h"
#include <time.h>

/*This function initialize 2D(array) with random number between 0 to 1000
void	ft_init_tab(int **tab)
{
	int	i;
	int	j;
	int	random_num;

	i = 0;
	while (i < 3)
	{
		j = 0;
		if (i == 0)
		{
			while (j < 5)
			{
				random_num = rand() % 50;
				tab[i][j] = random_num;
				j++;
			}
		}
		if (i == 2)
		{
			while (j < 5)
			{
				random_num = rand() % 100;
				tab[i][j] = random_num;
				j++;
			}
		}
		if (i == 3)
		{
			while (j < 5)
			{
				random_num = rand() % 1000;
				tab[i][j] = random_num;
				j++;
			}
		}
	}
}*/

/*This funciton moves a node from one list to another*/
				/*To be modified*/
void	ft_move_node(t_list **left_lst, t_list **right_lst)
{
	t_list *lst1;
	t_list *lst2;
	t_list *tmp1;
	t_list *tmp2;
	
	lst1 = *right_lst;
	lst2 = *left_lst;
	tmp1 = NULL;
	tmp2 = NULL;
	if (right_lst == NULL || left_lst == NULL)
		return ;
	else
	{
		tmp1 = lst1->next;
		tmp2 = lst1;
		tmp2->next = lst2;
		*right_lst = tmp1;
		*left_lst = tmp2;
	}
}

/*This function counts how many nodes are there in a list*/

int		ft_lst_count(t_list *lst)
{
	int		count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*This function prints the number of nodes in a*/

void	ft_number_of_nodes(t_list *head)
{
	ft_putstr("Number of Nodes in the list -> ");
	ft_putnbr(ft_lst_count(head));
	ft_putchar('\n');	
}

int		main(void)
{
	int		i;
	int		n;
	int		random_num;
	int		tab[5] = {100, 200, 300, 400, 500};
	int		tab1[5] = {10, 20, 30, 40, 50};
	int		tab2[5];
	t_list	*head_list;
	t_list	*list1;
	t_list	*list2;
	
	list1 = NULL;
	head_list = NULL;
	list2 = NULL;
	n = 0;

/*
	srand(time(NULL));
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 50;
		tab[i] += random_num;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 100;
		tab1[i] = random_num;
		i++;
	}*/
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 1000;
		tab2[i] = random_num;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		ft_pushfront_node(&head_list, &tab[i]);
		ft_pushback_node(&list1, &tab1[i]);
		ft_pushback_node(&list2, &tab2[i]);
		i++;
	}
	ft_putendl("\nBefore moving node:");
	ft_putstr("List[1]:\n\n");
	ft_print_lst(head_list);
	ft_number_of_nodes(head_list);
	ft_putstr("\nList[2]:\n\n");
	ft_print_lst(list1);
	ft_move_node(&head_list, &list1);
	ft_putendl("\nAfter moving node:");
	ft_putstr("List[1]:\n\n");
	ft_print_lst(head_list);
	ft_number_of_nodes(head_list);
	ft_putstr("\nList[2]:\n\n");
	ft_print_lst(list1);
	ft_number_of_nodes(list1);
	ft_putstr("\nList[3]:\n\n");
	ft_print_lst(list2);
	ft_number_of_nodes(list1);
	ft_putstr("\nLinked_list[1][2][3]:\n\n");
	ft_lists_linker(&head_list, list1);
	ft_lists_linker(&head_list, list2);
	ft_print_lst(head_list);
	ft_number_of_nodes(head_list);
	return (0);
}
