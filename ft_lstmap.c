/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:10:47 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 12:53:03 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_lstmap__ iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new list resulting of
the successive applications of the function ’f’. The ’del’ function
is used to delete the content of a node if needed.
** INPUT **
lst = The address of a pointer to a node.
f = The address of the function used to iterate on the list.
del = The address of the function used to delete the content of a
		node if needed
** OUTPUT**
The new list.
NULL if the allocation fails. */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_cpy;
	t_list	*new_elem;
	void	*set;

	if (!f || !lst)
		return (NULL);
	lst_cpy = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_elem = ft_lstnew(set);
		if (new_elem == NULL)
		{
			del(set);
			ft_lstclear(&lst_cpy, (*del));
			return (NULL);
		}
		ft_lstadd_back(&lst_cpy, new_elem);
		lst = lst->next;
	}
	return (lst_cpy);
}
