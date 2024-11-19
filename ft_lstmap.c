/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:13:46 by agruet            #+#    #+#             */
/*   Updated: 2024/11/19 16:33:08 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*alloc_fail(t_list *map, void *content, void (*del)(void *))
{
	free(content);
	if (map)
		ft_lstclear(&map, (*del));
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*temp;
	void	*content;

	if (!lst)
		return (NULL);
	content = (*f)(lst->content);
	map = ft_lstnew(content);
	if (!map)
		return (alloc_fail(map, content, (*del)));
	while (lst->next)
	{
		lst = lst->next;
		content = (*f)(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
			return (alloc_fail(map, content, (*del)));
		ft_lstadd_back(&map, temp);
	}
	return (map);
}

/*void	del_str(void *content)
{
	free(content);
}

void	*upper_lst(void *content)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_strdup((char *)content);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, ((char *)elem->content), len);
	write(1, "\n", 1);
}

int	main(void)
{
	t_list		*list;
	t_list		*elem = ft_lstnew(ft_strdup("bonjour"));
	t_list		*elem2 = ft_lstnew(ft_strdup("coucou"));
	t_list		*elem3 = ft_lstnew(ft_strdup("aurevoir"));

	elem->next = elem2;
	elem2->next = elem3;
	if (!(list = ft_lstmap(elem, &upper_lst, &del_str)))
	{
		ft_lstclear(&elem, (&del_str));
		return (0);
	}
	// int i;
	//i = 0;
	//ft_print_result(list);
	//while (list->next)
	//{
	//	list = list->next;
	//	ft_print_result(list);
	//	i++;
	//}
	ft_lstclear(&elem, (&del_str));
	ft_lstclear(&list, (&del_str));
	return (0);
}*/
