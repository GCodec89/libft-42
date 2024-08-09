/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:16:50 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/22 11:15:45 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*src;
	size_t	final_len;

	if (!s)
		return (NULL);
	src = (char *)s + start;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(src) < len)
		final_len = ft_strlen(src) + 1;
	else
		final_len = len + 1;
	substr = malloc(sizeof(char) * final_len);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, src, final_len);
	return (substr);
}
