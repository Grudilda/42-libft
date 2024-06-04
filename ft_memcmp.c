/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:31 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:21:01 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_memcmp__ compares the first n bytes (each interpreted
as unsigned char) of the memory areas s1 and s2. It returns an
integer less than, equal to, or greater than zero if the first
n bytes of s1 is found, respectively, to be less than, to match,
or be greater than the first n bytes of s2.
** INPUT **
s1, s2 = the two string to compare
m = number of bytes to compare
** OUTPUT **
An integer less than, equal to, or greater than zero */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*t1;
	unsigned const char	*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
		n--;
	}
	return (0);
}
