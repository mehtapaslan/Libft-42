/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:39:15 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:49:46 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *temp_str;
    
    temp_str = (unsigned char *)s;
    
    while(n > 0)
    {
        if (*temp_str == (unsigned char)c)
            return((void *)temp_str);
        n--;
        temp_str++;
    }
    return (NULL);
}