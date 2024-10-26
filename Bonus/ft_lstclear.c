/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:24:19 by agruet            #+#    #+#             */
/*   Updated: 2024/10/04 19:34:53 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		(*lst) = tmp;
	}
}

/* void	del(t_list *lst)
{
	lst->content = NULL;
}


#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	t_list	**lst;
	t_list	*elt1 = ft_lstnew(av[1]);
	t_list	*elt2 = ft_lstnew(av[2]);
	t_list	*elt3 = ft_lstnew(av[3]);

	elt2->next = elt3;
	elt1->next = elt2;
	lst = &elt2;

	printf("%s\n", (char *)elt1->content);
	ft_lstclear(lst, (void *)&del);
} */
