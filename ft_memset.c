/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:23:21 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:49:58 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *temp;
    
    temp = (unsigned char *)s;

    while(n--)
        *temp++ = (unsigned char)c;
    return(s);
}