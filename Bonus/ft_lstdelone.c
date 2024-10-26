/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:53:46 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/* void	del(t_list *lst)
{
	lst->content = NULL;
}

#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	t_list	*elt1 = ft_lstnew(av[1]);
	printf("%s\n", (char *)elt1->content);
	ft_lstdelone(elt1, (void *)&del);
	// printf("%s", (char *)elt1->content);
} */
