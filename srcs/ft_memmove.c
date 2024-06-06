/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:36 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:36:10 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_memmove__ copies n bytes from memory area src to memory area dest.
The memory areas may overlap.
To avoid to lose data, the copy start from the end of src and dest.
** INPUT **
void *dest = memory area where the bytes are copied
const void *srdc = memory area from where the bytes are copied
size_t n = number of bytes copied
** OUTPUT  **
A pointer to dest */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcc;
	char	*destc;

	i = -1;
	srcc = (char *)src;
	destc = (char *)dest;
	if (srcc == NULL && destc == NULL)
		return (0);
	if (srcc < destc)
		while ((int)(--n) >= 0)
			*(destc + n) = *(srcc + n);
	else
		while (++i < n)
			*(destc + i) = *(srcc + i);
	return (dest);
}
