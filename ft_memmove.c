/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:23:43 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/16 22:19:09 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	i = 1;
	if (d > s)
	{
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}
