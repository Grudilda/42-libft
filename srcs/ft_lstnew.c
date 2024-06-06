/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:43:44 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 16:51:14 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates and returns a new node. The member variable 
’content’ is initialized with the value of the parameter 
’content’. The variable ’next’ is initialized to NULL
** INPUT **
content: the content to create the node with
** OUTPUT**
The new node */

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof * list);
	if (list != NULL)
	{
		list->content = content;
		list->next = NULL;
	}
	return (list);
}
