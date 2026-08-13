/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 19:13:50 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/11 12:03:25 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    
    if(nmemb == 0 || size == 0)
        return(malloc(1));
    if(nmemb > (size_t)-1 / size)
        return (NULL);
    ptr = malloc(nmemb * size);
    if(!ptr)
        return(NULL);
    ft_bzero(ptr, nmemb * size);
    return(ptr);
}