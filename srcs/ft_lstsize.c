/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:55:40 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 12:07:01 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_lstsize__ counts the number of nodes in a list.
** INPUT **
lst = the beginning of the list
** OUTPUT **
the length of the list */

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
