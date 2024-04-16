/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:31:45 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/15 10:54:29 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmed, size_t size)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(size * nmed);
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < size * nmed)
	{
		((unsigned char *)str)[i++] = (unsigned char)j;
	}
	return (str);
}
