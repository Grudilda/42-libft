/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:36:42 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 13:02:42 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  The bzero() function erases the data in the n bytes of
the memory starting at the location pointed to by s,
by writing zeros (bytes containing '\0') to that area.
** INPUT **
void *s = start of the memory to erase
sizet_t n = number of bytes to write 
** OUTPUT **
[![VOID]!] */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		++i;
	}
}
