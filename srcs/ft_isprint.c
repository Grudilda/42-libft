/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:11:52 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 16:14:57 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Check if the character in input is a printable
character or not.
** INPUT **
c = character to test
** OUTPUT **
1 or 0 */

int	ft_isprint(int c)
{
	if ((c > 31 && c < 127))
		return (1);
	return (0);
}
