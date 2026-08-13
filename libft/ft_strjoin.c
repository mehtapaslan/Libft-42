/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:30:14 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/11 17:20:18 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int len;
    unsigned int i;
    char *str;
    
    i = 0;
    if(!s1 || !s2)
        return(NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(len + 1);
    if(!str)
        return(NULL);
    while(*s1)
    {
        str[i] = *s1++;
        i++;
    }
    while(*s2)
    {
        str[i] = *s2++;
        i++;
    }
    str[i] = '\0';
    return(str);
}