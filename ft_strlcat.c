/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:40:36 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 19:07:58 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strlcat__ appends the NUL-terminated string src to the end
of dst. It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result. 
** INPUT **
dest = the string in which to append
src = the string to append
siz = number of bytes to append
** OUTPUT **
the initial length of dst plus the length of src */

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
{
	size_t	dest_len;
	size_t	i;

	if (dest == NULL && siz == 0)
		return (siz + ft_strlen(src));
	if (siz <= ft_strlen(dest))
		return (siz + ft_strlen(src));
	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && dest_len + 1 < siz)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
