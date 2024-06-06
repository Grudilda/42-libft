/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:01:51 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:39:10 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Takes as a parameter a node and frees the memory of the
node’s content using the function ’del’ given as a 
parameter and free the node. The memory of ’next’ must not
be freed.
** INPUT **
lst: The node to free
del: The address of the function used to delete the content
** OUTPUT**
[![VOID]!] */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free(lst);
	}
}
