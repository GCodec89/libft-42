/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:01:15 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/17 18:24:30 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n, int base);

static int	ft_absolute(int c);

char	*ft_itoa(int n)
{
	char	*number;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nlen(ft_absolute(n), 10);
	if (n < 0)
		i++;
	number = (char *)malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	number[i--] = '\0';
	if (n < 0)
	{
		number[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		number[0] = '0';
	while (n > 0)
	{
		number[i--] = (n % 10) + '0';
		n = n / 10;
	}
	return (number);
}

static int	ft_nlen(int n, int base)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n > 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}

static int	ft_absolute(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	return (c);
}
