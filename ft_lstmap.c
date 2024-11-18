/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:13:46 by agruet            #+#    #+#             */
/*   Updated: 2024/11/19 00:02:55 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**map;
	t_list	*temp;

	*map = NULL;
	while (lst)
	{
		printf("%s\n", (char*)lst->content);
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(map, (*del));
			return (NULL);
		}
		ft_lstadd_back(map, temp);
		lst = lst->next;
	}
	return (*map);
}

void	del_str(void *content)
{
	free(content);
}

void	*rot_1(void *content)
{
	char	*str = ft_strdup((char *)content);
	int		i = 0;

	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	t_list	*new1 = ft_lstnew("salut");
	t_list	*new2 = ft_lstnew("trkl");
	t_list	*new3 = ft_lstnew("aurevoir");
	ft_lstadd_back(&new1, new2);
	ft_lstadd_back(&new1, new3);
	printf("%s\n", (char*)new3->content);
	printf("%s\n", (char *)ft_lstmap(new1, &rot_1, &del_str)->next->next->content);
	return (0);
}
