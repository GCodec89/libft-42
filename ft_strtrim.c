/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:24:46 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/16 22:18:53 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
		{
			start++;
		}
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		{
			end--;
		}
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trim)
		{
			return (NULL);
		}
		ft_strlcpy(trim, &s1[start], end - start + 1);
		return (trim);
	}
	return (NULL);
}
