/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 13:52:49 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:49:30 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tostring(int length, int sign, long n)
{
	char	*str;

	str = malloc(length + 1);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		length = 1;
		str[0] = '0';
	}
	str[length] = '\0';
	while (--length >= 0)
	{
		if (sign == -1 && length == 0)
		{
			str[0] = '-';
			break ;
		}
		str[length] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	long	num_copy;
	size_t	length;
	int		sign;

	length = 0;
	sign = 1;
	num = n;
	if (n < 0)
	{
		length += 1;
		sign = -1;
		num *= -1;
	}
	num_copy = num;
	while (num_copy > 0)
	{
		num_copy = num_copy / 10;
		length++;
	}
	return (ft_tostring(length, sign, num));
}
