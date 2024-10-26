/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:36:47 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	t_list	**lst;
	t_list	*elt1 = ft_lstnew(av[1]);
	t_list	*elt2 = elt2 = ft_lstnew(av[2]);
	t_list	*elt3 = ft_lstnew(av[3]);

	elt2->next = elt3;
	elt1->next = elt2;
	// elt1 = NULL;
	lst = &elt1;

	// printf("%p", (ft_lstlast(*lst)));
	printf("%s", (char *)(ft_lstlast(*lst)->content));
	return (0);
} */
