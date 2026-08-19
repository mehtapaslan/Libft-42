/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 17:58:51 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/19 18:13:02 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return (0);
	while(lst->next != NULL)
		lst = lst->next;
	return(lst);
}

#include <stdio.h>
int main()
{
	t_list *head;

	head = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&head ,ft_strdup("world"));
	ft_lstadd_back(&head ,ft_strdup("merhaba"));
	ft_lstadd_back(&head ,ft_strdup("dunya"));
	
	t_list *last;

	last = ft_lstlast(head);
	printf("%s\n", (char *)last->content);
}