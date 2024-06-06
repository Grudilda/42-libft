/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:25:21 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:48:16 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strnstr__ locates the first occurrence of the null-terminated
string s2 in the string s1, where not more than n characters are searched.
Characters that appear after a `\0' character are not searched. 
** INPUT **
big = the string which is scan
little = the string for which big is scanned for
len = number of character which is scanned
** OUTPUT **
A pointer to the 1st character of the 1srt occurence of s2
A NULL pointer if s2 occurs nowhere s1
S1 if s2 is an empty string */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (big == NULL && len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			++j;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		++i;
	}
	return (0);
}
