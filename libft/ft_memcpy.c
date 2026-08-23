/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:13:48 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/22 13:26:05 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	if (!dest && !src)
		return (NULL);
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	while (n--)
		*temp_dest++ = *temp_src++;
	return (dest);
}
