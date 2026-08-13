/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 21:54:04 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/11 11:45:10 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *temp_s;
    size_t len;

    len = ft_strlen(s);
    temp_s = (char *)malloc(len + 1);
    if(!s)
        return(NULL);
    ft_memcpy(temp_s, s, len + 1);
    return(temp_s);
}