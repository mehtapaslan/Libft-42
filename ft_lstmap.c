/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 21:22:42 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/19 15:18:31 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_node;
	void *content;

	if(!lst || !f || !del)
		return (NULL);
	while(lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if(!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return(new_list);	
}
void	del(void *s)
{
	free(s);
}

void	*f(void *s)
{
	int i = 0;
	char *ss;
	ss = ft_strdup((char *)s);
	while (ss[i])
	{
		ss[i] = ft_toupper(ss[i]);
		i++;
	}
	return (ss);
}
#include <stdio.h>
int main()
{
    t_list  *mapped_list; // ft_lstmap'ten dönecek YENİ liste için
    t_list  *temp;

    t_list *s1 = ft_lstnew(ft_strdup("mehtap"));
    t_list *s2 = ft_lstnew(ft_strdup("aslan"));
    t_list *s3 = ft_lstnew(ft_strdup("suhan"));
    t_list *s4 = ft_lstnew(ft_strdup("gomec"));

    // DÜZELTME 4: Düğümleri birbirine doğru şekilde bağlamak
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;

    // DÜZELTME 5: Sadece fonksiyonun adını (f) gönderiyoruz ve sonucu yeni listeye atıyoruz.
    mapped_list = ft_lstmap(s1, f, del);

    // DÜZELTME 6: Yeni listeyi yazdırmak için doğru bir döngü
    temp = mapped_list;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
    
    // (İyi bir pratik: Program biterken hem orijinal hem yeni listeyi ft_lstclear ile temizlemelisin)
    
    return (0);
}