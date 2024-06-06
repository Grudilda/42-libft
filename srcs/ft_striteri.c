/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:52:16 by grudi             #+#    #+#             */
/*   Updated: 2024/05/30 11:59:28 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_striteri__ applies the function ’f’ on each character of
the string passed as argument, passing its index as first argument.
Each character is passed by address to ’f’ to be modified if necessary.
** INPUT **
s = The string on which to iterate.
f = The function to apply to each character
** OUTPUT **
[![VOID]!] */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
