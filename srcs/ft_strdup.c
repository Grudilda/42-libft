/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:29:01 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:54:08 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strdup__  returns a pointer to a new string which is a
duplicate of the string s. Memory for the new string is obtained
with malloc(3), and can be freed with free(3).
** INPUT **
s1 = the string to duplicate
** OUTPUT **
A pointer to the duplicated string
NULL if allocation failed */

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup == NULL)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
