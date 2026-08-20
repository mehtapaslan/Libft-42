/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 21:22:42 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/19 18:44:30 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	*f(void *s)
{
	int i = 0;
	char *str;
	str = ft_strdup((char*)s);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
    t_list  *mapped_list;
    t_list  *temp;

    t_list *s1 = ft_lstnew(ft_strdup("mehtap"));
    t_list *s2 = ft_lstnew(ft_strdup("aslan"));
    t_list *s3 = ft_lstnew(ft_strdup("suhan"));
    t_list *s4 = ft_lstnew(ft_strdup("gomec"));

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;

    mapped_list = ft_lstmap(s1, f, free);

    temp = mapped_list;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    return (0);
}*/