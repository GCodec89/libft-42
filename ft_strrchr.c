/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:16:38 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/15 08:59:00 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	if (c == 0)
	{
		return ((char *)(s + len));
	}
	if (!s[0])
	{
		return (NULL);
	}
	while (len--)
	{
		if (*(s + len) == (char)c)
		{
			return ((char *)(s + len));
		}
	}
	return (NULL);
}
