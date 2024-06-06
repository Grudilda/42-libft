/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:53:32 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 13:08:16 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*Alloue (avec malloc(3)) et retourne une chaîne de
caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.
** INPUT **
s: La chaîne de laquelle extraire la nouvelle
chaîne.
start: L’index de début de la nouvelle chaîne dans
la chaîne ’s’.
len: La taille maximale de la nouvelle chaîne.*/

char	*ft_alloc_substr(size_t len)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}

char	*ft_extract_substr(const char *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	tab = ft_alloc_substr(len);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	return (ft_extract_substr(s, start, len));
}
