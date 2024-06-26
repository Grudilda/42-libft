/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:53:28 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 19:25:12 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strcmp__ compares the first (at most) n bytes of
the two strings s1 and s2. It returns an integer less
than, equal to, or greater than zero if s1 is found,
respectively, to be less than, to match, or be greater
than s2.
** INPUT **
s1, s2 = the two string to compares
** OUTPUT **
an integer less than, equal to, or greater than zero */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
