#ifndef LINK_LIST_H
# define LINK_LIST_H

# include "../libft.h"
# include <stdio.h>

void	ft_print_lst(t_list *lst);
void	ft_pushfront_node(t_list **lst, void *data);
void	ft_lists_linker(t_list **lst, t_list *head);
t_list	*ft_create_node(void *data);
t_list	*ft_connect_lst(t_list *lst_a, t_list *lst_b);
#endif
