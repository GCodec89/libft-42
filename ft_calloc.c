/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:31:45 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/16 22:18:59 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmed, size_t size)
{
	char	*str;
	size_t	len;

	len = nmed * size;
	str = (char *)malloc(len);
	if (!str)
	{
		return (NULL);
	}
	ft_memset(str, 0, len);
	return (str);
}
