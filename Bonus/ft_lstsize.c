/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:21:38 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	t_list	**lst;
	t_list	*elt1 = ft_lstnew(av[1]);
	t_list	*elt2 = ft_lstnew(av[2]);
	t_list	*new = ft_lstnew(av[3]);;

	elt2->next = elt3;
	elt1->next = elt2;

	lst = &elt1;
	printf("%d", ft_lstsize(*lst));
	return (0);
} */
