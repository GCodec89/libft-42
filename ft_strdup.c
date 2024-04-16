/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:55:03 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/15 11:02:42 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;
	size_t	k;

	k = 0;
	while (s1[k] != '\0')
	{
		k++;
	}
	s2 = (char *)malloc(sizeof(char *) * (k + 1));
	if (!s2)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
