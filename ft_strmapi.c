/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:37:37 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:50:42 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;
	
	if(!s || !f)
		return(NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if(!str)
		return(NULL);
	i = 0;
	while(s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

//char function(unsigned int i, char c)
//{
//	(void)i;
//	return(c+1);
//}

//#include <stdio.h>
//int main()
//{
//	char s[] = "abcd";
//	char *result = ft_strmapi(s, function);
	
//	printf("%s", result);
//}