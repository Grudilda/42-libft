/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:05:34 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 17:46:30 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* __ft_putstr_fd__  outputs the string ’s’ to the given file
descriptor
** INPUT **
char *s = the string to output.
ibnt fd =  the file descriptor on which to write.
** OUTPUT **
[![VOID]!] */

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
