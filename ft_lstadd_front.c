/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:40:46 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:49:33 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

//void a(){
//	int x = 5;
//	t_list *head = 0x100 ;
	
//	print x
//	addfront(&head)
//	print x
//}
//void y(t_list *lst){
//	*c = 10;	
//}