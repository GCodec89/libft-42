/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:32:03 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/24 16:27:20 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*new;

	if (!lst)
	{
		lst = NULL;
	}
	if (f)
	{
		while (lst)
		{
			new = lst->next;
			f((lst)->content);
			lst = new;
		}
	}
}
