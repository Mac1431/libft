#include "link_list.h"
#include <time.h>

/*This function initialize (array) with random number between 0 to 1000*/
				/*To be modified*/
void	ft_init_tab(int *tab1, int *tab2, int *tab3)
{
	int	i;
	int	random_num;

	i = 0;
	srand(time(NULL));
	while (i < 5)
	{
		random_num = rand() % 50;
		tab1[i] = random_num;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 100;
		tab2[i] = random_num;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		random_num = rand() % 1000;
		tab3[i] = random_num;
		i++;
	}

}

int		main(void)
{
	int		i;
	int		tab1[5];
	int		tab2[5];
	int		tab3[5];
	t_list	*head_list;
	t_list	*list1;
	t_list	*list2;
	
	list1 = NULL;
	head_list = NULL;
	list2 = NULL;

	ft_init_tab(tab1, tab2, tab3);
	i = 0;
	while (i < 5)
	{
		ft_pushfront_node(&head_list, &tab1[i]);
		ft_pushback_node(&list1, &tab2[i]);
		ft_pushback_node(&list2, &tab3[i]);
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
	ft_number_of_nodes(list2);
	ft_putstr("\nLinked_list[1][2][3]:\n\n");
	ft_lists_linker(&head_list, list1);
	ft_lists_linker(&head_list, list2);
	ft_print_lst(head_list);
	ft_number_of_nodes(head_list);
	return (0);
}
