/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:56:54 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:43:28 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_putchar_fd__  outputs the character ’c’ to the given file
descriptor.
** INPUT **
char c = the character to print
int fd = the file descripptor on which to write
** OUTPUT **
[![VOID]!] */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
