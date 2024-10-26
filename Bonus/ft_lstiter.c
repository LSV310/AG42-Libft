/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:20:05 by agruet            #+#    #+#             */
/*   Updated: 2024/10/26 22:08:42 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
void	print(void *str)
{
	printf("%s\n", (char *)str);
}

int	main(int ac, char **av)
{
	(void)ac;
	t_list	*elt1 = ft_lstnew(av[1]);
	t_list	*elt2 = elt2 = ft_lstnew(av[2]);
	t_list	*elt3 = ft_lstnew(av[3]);

	elt2->next = elt3;
	elt1->next = elt2;
	ft_lstiter(elt1, &print);
	return (0);
} */
