/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:25:41 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/16 09:40:32 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	str = (char *)malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		j++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
