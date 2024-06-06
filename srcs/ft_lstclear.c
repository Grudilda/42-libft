/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:11:25 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 18:59:17 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given node and every successor of
that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
** INPUT **
lst = The address of a pointer to a node
del = The address of the function used to delete the content
		of the node
** OUTPUT **
[![VOID]!] */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del || !(*lst))
		return ;
	while ((*lst)->next)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
