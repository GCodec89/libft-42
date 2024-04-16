/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:23:43 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/13 13:27:47 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (!ptr && !ptr2)
		return (NULL);
	i = 1;
	if (ptr > ptr2)
	{
		while (i <= n)
		{
			ptr[n - i] = ptr2[n - i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		*(ptr++) = *(ptr2++);
		n--;
	}
	return (dest);
}
