/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:03:14 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:34:26 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_memcpy__ copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.
** INPUT **
void *dest = memory area where the bytes are copied
const void *srdc = memory area from where the bytes are copied
size_t n = number of bytes copied
** OUTPUT  **
A pointer to dest */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if ((dst == 0 && src == 0) || (dst == src))
		return (dst);
	while (n--)
		tmp1[n] = tmp2[n];
	return (dst);
}
