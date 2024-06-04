/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:35:51 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 16:44:08 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_memset__ fills the first n bytes of the memory
area pointed to by s with the constant byte c.
** INPUT **
void *b = memory area to fills whith the constant byte c
int	c = the constant byte  to fill the memory with
size_t len = the number of bytes to fill
** OUTPUT **
A pointer to the memory */

void	*ft_memset(void *s, int c, size_t len)
{
	int	i;

	i = 0;
	while (len--)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
