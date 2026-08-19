/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:08:07 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:50:22 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	
	if(!s || !f)
		return ;
	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

//void function(unsigned int i, char *c)
//{
//	(void)i;
//	*c = *c + 1;
//}

//#include <stdio.h>
//int main()
//{
//	char s[] = "abcd";
//	ft_striteri(s, function);
	
//	printf("%s", s);
//}