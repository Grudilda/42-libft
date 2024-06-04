/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:29:31 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 16:19:35 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/* __ft_strlen__ calculates the length of the string
pointed to by s, excluding the terminating null byte ('\0').
** INPUT **
s = string to calculate the length
** OUTPUT **
The length */

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
