/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:42:13 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/07 18:12:32 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *temp_str;
    int i;
    
    i = ft_strlen(s);
    while(i >= 0)
    {
        *temp_str++ = *(char *)&s[i];
        i--;
    }
    ft_strchr(temp_str, c);
}