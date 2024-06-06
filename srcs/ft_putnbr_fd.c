/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:51:58 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:45:36 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_putnbr_fd__  outputs the integer ’n’ to the given file
descriptor
** INPUT **
int n = the integer to output.
ibnt fd =  the file descriptor on which to write.
** OUTPUT **
[![VOID]!] */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		num = n * -1;
	else
		num = n;
	if (num < 10)
		ft_putchar_fd(num + 48, fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
