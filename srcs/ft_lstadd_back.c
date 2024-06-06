/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:00:01 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 15:16:45 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds the node ’new’ at the end of the list.
*tmp = |*alst| while tmp<next> is not equal to NULL
it continues to browse the linked list. When the 
condition is meet, it replaces the tmp<next> by the new node.
** INPUT **
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list
** OUTPUT**
[![VOID]!] */

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	if (!*alst)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
