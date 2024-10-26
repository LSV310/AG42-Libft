/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:43:58 by agruet            #+#    #+#             */
/*   Updated: 2024/10/04 18:43:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!(*lst))
		(*lst) = new;
	else
		ft_lstlast(*lst)->next = new;
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
	// elt1 = NULL;
	lst = &elt1;

	printf("%s\n", (char *)(ft_lstlast(*lst)->content));
	ft_lstadd_back(lst, new);
	printf("%s", (char *)(ft_lstlast(*lst)->content));
	return (0);
} */
