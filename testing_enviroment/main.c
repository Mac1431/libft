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

int		main(void)
{
	int		i;
	int		random_num;
	int		tab2[5];
	int		tab[5];
	int		tab1[5];
	t_list	*head_list;
	t_list	*list1;
	t_list	*list2;
	
	list1 = NULL;
	head_list = NULL;
	list2 = NULL;

	srand(time(NULL));
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 50;
		tab[i] = random_num;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 100;
		tab1[i] = random_num;
		i++;
	}
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
	ft_putstr("\nList[1]:\n\n");
	ft_print_lst(head_list);
	ft_putstr("\nList[2]:\n\n");
	ft_print_lst(list1);
	ft_putstr("\nList[3]:\n\n");
	ft_print_lst(list2);
	ft_putstr("\nLinked_list[1][2][3]:\n\n");
	ft_lists_linker(&head_list, list1);
	ft_lists_linker(&head_list, list2);
	ft_print_lst(head_list);
	free(list1);
	free(head_list);
	return (0);
}