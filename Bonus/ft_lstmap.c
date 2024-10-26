/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:30:16 by agruet            #+#    #+#             */
/*   Updated: 2024/10/06 14:42:40 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flst;
	t_list	*flst_front;

	if (!lst || !f || !del)
		return (NULL);
	flst = ft_lstnew((*f)(lst->content));
	flst_front = flst;
	while (lst && flst)
	{
		lst = lst->next;
		if (lst)
		{
			flst->next = ft_lstnew((*f)(lst->content));
			flst = flst->next;
			if (!flst)
			{
				ft_lstclear(&flst_front, (*del));
				return (NULL);
			}
		}
	}
	return (flst_front);
}

/* #include <stdio.h>
void	*lst_rot(void *str)
{
	size_t	i;

	i = 0;
	while(((char *)str)[i])
	{
		((char *)str)[i] = ((char *)str)[i] + 2;
		i++;
	}
	return (str);
}

void	del(void *lst)
{
	((t_list *)lst)->content = NULL;
}

int	main(int ac, char **av)
{
	(void)ac;
	t_list	*elt1 = ft_lstnew(av[1]);
	// t_list	*elt1 = NULL;
	t_list	*elt2 = elt2 = ft_lstnew(av[2]);
	t_list	*elt3 = ft_lstnew(av[3]);
	t_list	*new;

	elt2->next = elt3;
	elt1->next = elt2;

	new = ft_lstmap(elt1, &lst_rot, &del);
	printf("%p", new);
	// printf("%s\n", (char *)new->content);
	// printf("%s", (char *)new->next->next->content);
	return (0);
} */
