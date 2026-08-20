/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:10:53 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/19 16:36:27 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	if (!dest || !src)
		return (NULL);
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (temp_dest < temp_src)
		ft_memcpy(dest, src, n);
	else if (temp_dest > temp_src)
	{
		while (n--)
			*(temp_dest + n) = *(temp_src + n);
	}
	return (dest);
}
