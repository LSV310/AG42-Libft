/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:01:24 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	t_list	**lst;
	t_list	*elt1 = ft_lstnew(av[1]);
	t_list	*elt2 = ft_lstnew(av[2]);
	t_list	*new = ft_lstnew(av[3]);;

	elt1->next = elt2;
	lst = &elt1;

	printf("%s %s\n", (char *)(*lst)->content, (char *)(*lst)->next->content);
	ft_lstadd_front(lst, new);
	printf("%s %s", (char *)(*lst)->content, (char *)(*lst)->next->content);
	return (0);
} */
