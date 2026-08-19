/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:05:03 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:00:38 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    unsigned char *s;
    int	i;
	int	sign;
	size_t	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
    s = (unsigned char *)nptr;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
        i++;
    }
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = (nbr * 10) + (s[i] - '0');
		i++;
	}
	return (nbr * sign);
}