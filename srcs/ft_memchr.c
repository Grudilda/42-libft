/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:33 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:14:35 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __fr_memchr__ scans the initial n bytes of the memory
area pointed to by s for the first instance of c. Both c
and the bytes of the memory area pointed to by s are
interpreted as unsigned char.
** INPUT **
const void *s = memoru area to scan
int c = character for which s is scan to find
size_t n = number of bytes to scan from the start of s
** OUTPUT **
A pointer to the matching byte
NULL if the character does not occurs */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
