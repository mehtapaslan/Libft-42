/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 12:23:21 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/07 17:37:21 by mehaslan         ###   ########.fr       */
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