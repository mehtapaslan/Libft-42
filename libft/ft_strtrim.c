/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:23:51 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/11 20:48:35 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isset(char c, char const *set)
{
    while(*set)
    {
        if(c == *set)
            return(1);
        set++;
    }
    return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;

    if (!s1 || !set)
		return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while(start < end && ft_isset(s1[start], set))
        start++;
    while(end > start && ft_isset(s1[end - 1], set))
        end--;
    return(ft_substr(s1, start, end - start));
}