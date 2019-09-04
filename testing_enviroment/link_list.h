#ifndef LINK_LIST_H
# define LINK_LIST_H

# include "../libft.h"
# include <stdio.h>

void	ft_print_lst(t_list *lst);
void	ft_pushfront_node(t_list **lst, void *data);
void	ft_pushback_node(t_list **lst, void *data);
void	ft_lists_linker(t_list **lst, t_list *head);
void	ft_number_of_nodes(t_list *head);
void	ft_move_node(t_list **lst1, t_list **lst2);
int		ft_lst_count(t_list *lst);
t_list	*ft_create_node(void *data);
t_list	*ft_connect_lst(t_list *lst_a, t_list *lst_b);
#endif
