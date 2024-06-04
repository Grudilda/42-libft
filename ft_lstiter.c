/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:10:30 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 12:11:23 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_lstiter__ iterates the list ’lst’ and applies the function
’f’ on the content of each node.
** INPUT **
lst = The address of a pointer to a node
f = The address of the function used to iterate on the list
** OUTPUT **
[![VOID]!] */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		ft_lstiter(lst->next, f);
		f(lst->content);
	}
}
