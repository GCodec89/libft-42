/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:21:23 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/22 21:48:03 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c);
static size_t	word_len(char const *s, char c);
static void		free_all(size_t i, char **array);
static char		**split(char const *s, char c, char **array, size_t count_w);

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
	{
		return (NULL);
	}
	words = count_w(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
	{
		return (NULL);
	}
	array = split(s, c, array, words);
	return (array);
}

static size_t	count_w(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
			{
				i++;
			}
		}
		else if (*(s + i) == c)
		{
			i++;
		}
	}
	return (count);
}

static char	**split(char const *s, char c, char **array, size_t count_words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < count_words)
	{
		while (*(s + j) && *(s + j) == c)
		{
			j++;
		}
		*(array + i) = ft_substr(s, j, word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_all(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
		{
			j++;
		}
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
	{
		i++;
	}
	return (i);
}

static void	free_all(size_t i, char **array)
{
	while (i >= 0)
	{
		i--;
		free(*(array + i));
	}
}
