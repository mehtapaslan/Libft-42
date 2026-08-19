/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:42:13 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:50:56 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = ft_strlen(s);
    while(i >= 0)
    {
        if (s[i] == (unsigned char)c)
			return ((char *)s + i);
        i--;
    }
    return(NULL);
}