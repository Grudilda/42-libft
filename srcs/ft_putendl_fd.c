/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:09:33 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:44:38 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_putendl_fd__  outputs the string ’s’ to the given file descriptor
followed by a newline.
** INPUT **
char *s = The string to output.
ibnt fd =  The file descriptor on which to write.
** OUTPUT **
[![VOID]!] */

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	caract;

	if (s == NULL)
		return ;
	caract = 0;
	while (s[caract])
	{
		write(fd, &s[caract], 1);
		caract++;
	}
	write(fd, "\n", 1);
}
