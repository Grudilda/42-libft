/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:38 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 13:45:57 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_calloc__ allocates the requested memory and returns
a pointer to it. It sets allocated memory to zero.
** INPUT **
size_t nmemb = number of elements to allocate
size_t size = size of each element to allocate
** OUTPUT **
A pointer to the allocated memory */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_tot;

	size_tot = nmemb * size;
	if ((size_tot < size || size_tot < nmemb) && size_tot > 0)
		return (NULL);
	ptr = malloc(size_tot);
	if (ptr == NULL )
		return (NULL);
	ft_bzero(ptr, size_tot);
	return (ptr);
}
