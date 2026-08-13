/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 18:23:20 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/10 18:03:55 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    if (!little[0])
        return((char *)big);

    while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && len > (i + j))
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return(NULL);
}