/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:02:11 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:50:12 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_counter(char const *s, char delimiter)
{
	unsigned int	word;

	word = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			word++;
		}
	}
	return (word);
}

void	*ft_free_array(char **result, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_fill(char const *s, char **result, char c)
{
	int	i;
	int	index;
	int	length;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			length = 0;
			while (s[i + length] && s[i + length] != c)
				length++;
			result[index] = ft_substr(s, i, length);
			if (!result[index])
				return (ft_free_array(result, index));
			index++;
			i += length;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!result)
		return (NULL);
	result[ft_word_counter(s, c)] = NULL;
	return (ft_fill(s, result, c));
}
