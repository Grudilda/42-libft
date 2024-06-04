/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:28 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 19:18:07 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strrchr__ return a pointer to the matched character
or NULL if the character is not found. The terminating null
byte is considered part of the string, so that if c is 
specified as '\0', these functions return a pointer to the
terminator.
** INPUT **
s = the string in which to locate the character
c = the character to locate
** OUTPUT **
a pointer to the last occurrence of c  */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i > 0 && ((char *)s)[i] != (char)c)
		--i;
	if (((char *)s)[i] != (char)c)
		return (NULL);
	return ((char *)s + i);
}
