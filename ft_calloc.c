/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:31:45 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/19 18:03:21 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmed, size_t size)
{
	unsigned char	*str;

	if (nmed && size && nmed > (2147483647 / size))
	{
		return (NULL);
	}
	str = malloc(nmed * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nmed * size);
	return (str);
}
