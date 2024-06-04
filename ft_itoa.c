/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:15:11 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 18:50:02 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The itoa function converts an integer into a null-terminated
string. It can convert negative numbers too.
** INPUT **
int n =  integer to turn into a string
** OUTTPUT **
the string from the integer */

static int	len_calc(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	while (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static unsigned int	check_minus(int n, char *tab)
{
	unsigned int	num;

	if (n < 0)
		tab[0] = '-';
	if (n < 0)
		num = n * -1;
	else
		num = n;
	return (num);
}

/* The division by ten shift tens by tens ; the (num % 10 + 48) turns
the integer into a char (char '0' = 48, 0 + 48 = 48).  */

char	*ft_itoa(int n)
{
	int				len;
	char			*tab;
	unsigned int	num;

	len = len_calc(n);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	tab[len] = '\0';
	if (n == 0)
	{
		tab[0] = 48;
		return (tab);
	}
	num = check_minus(n, tab);
	while (num)
	{
		tab[len - 1] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (tab);
}
