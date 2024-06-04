/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:53:12 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 16:37:51 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
__get_len__ -> browse 's1' to increase count1 (initialised at 0) and
decrease count2 (initialised at __ft_strlen__ of s1), it returns the
difference between count2 and count1 plus 1.
Then __ft_strtrim__ allocates and cpy into this new string the wanted
characters of 's1.
** INPUT **
s1: The string to be trimmed
set: The reference set of characters to trim.
** OUTPUT **
The trimmed string.
NULL if the allocation fails */

static int	get_len(int *count1, int *count2, char const *s1,
		char const *set)
{
	int	j;
	int	i;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[*count1] == set[j])
				++(*count1);
			if (s1[*count2] == set[j])
				--(*count2);
			++j;
		}
		++i;
	}
	if ((*count2 - *count1 + 1) < 0)
		return (0);
	return (*count2 - *count1 + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_var	var;
	int		count1;
	int		count2;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	count1 = 0;
	count2 = ft_strlen(s1) - 1;
	var.len = get_len(&count1, &count2, s1, set);
	var.i = 0;
	str = malloc(sizeof(char) * (var.len + 1));
	if (str == NULL)
		return (NULL);
	if (str)
	{
		while (count1 <= count2)
		{
			str[var.i] = s1[count1];
			++var.i;
			++count1;
		}
		str[var.i] = 0;
	}
	return (str);
}
