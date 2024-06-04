/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:44:42 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 19:06:38 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strlcpy__ copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.
** INPUT **
dest = the string in which to copy
src = the string to copy
siz = number of bytes to copy
** OUTPUT **
the length of src */

size_t	ft_strlcpy(char *dest, const char *src, size_t siz)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (siz == 0)
		return (j);
	while (i < siz -1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
