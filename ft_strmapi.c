/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:52:21 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:56:50 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_strmapi__ Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
** INPUT **
s = The string on which to iterate.
f = The function to apply to each character
** OUTPUT **
A pointer to the string created
NULL if the allocation fails */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (0);
	while (s[i])
	{
		str[i] = ((*f)(i, s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
