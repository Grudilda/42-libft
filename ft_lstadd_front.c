/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:45:20 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 15:27:41 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds the node ’new’ at the beginning of the list.
It use tmp to store the former first node. then put the new node
as first node by adding tmp as its next.
** INPUT **
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list
** OUTPUT**
[![VOID]!] */

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (!alst || !new)
		return ;
	tmp = *alst;
	*alst = new;
	new->next = tmp;
}
