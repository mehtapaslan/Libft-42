/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 20:53:43 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/08 18:22:36 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *temp_s1;
    unsigned char *temp_s2;
    size_t i;

    if(n == 0)
        return(0);
    i = 0;
    temp_s1 = (unsigned char *)s1;
    temp_s2 = (unsigned char *)s2;
    while(temp_s1[i] == temp_s2[i] && i < n-1)
    {
        i++;
    }
    return(temp_s1[i] - temp_s2[i]);
}