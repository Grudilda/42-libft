/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:33:26 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 18:50:47 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_atoi__ starts by checking whitespaces, then check sign.
In the case of a minus sign is found, the variable <sign> is
turned into a negative int (sign = -sign).
It then transform each character in an integer.
The multiplication by ten shift tens by tens ; the (str[i] - 48) turns
the character into an int (char '0' = 48, 48 - 48 = 0).
** INPUT **
const char str = the string to turn into integer
** OUTPUT **
the integer from the string */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	num *= sign;
	return (num);
}
