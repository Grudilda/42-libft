/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-b <abonte-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:52:55 by grudi             #+#    #+#             */
/*   Updated: 2024/05/29 18:39:50 by abonte-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns an array of strings obtained
by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer. 
** INPUT **
s: The string to be split
c: The delimiter character
** OUTPUT **
The array of new strings resulting from the split
NULL if the allocation fails */

/* free the array if malloc fails */

static void	*ft_freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		++i;
	}
	free(tab);
	return (NULL);
}

/* counts the number of separators and therefore enable
 to know the number of strings that will be in the array */

static size_t	ft_countrow(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (s[0] != c && s[0] != 0)
	{
		++count;
		++i;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			++count;
		++i;
	}
	return (count);
}

/* calculate the lenght of the current string to
put in the array, starting after the last delimiter */

static size_t	ft_size(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

/* initialize the three indexes in t_var needed
for __ft_split__ */

static void	init_var(t_var *var)
{
	var->idx_s = 0;
	var->idxtab = -1;
	var->idx_s2 = -1;
}

/* check if the string to copy exists. Then it allocate an
array with the right amount of cells (given by
__ft_countrow__). Then move forward string 's' to calculate
the spot where the first sub-string start. 
With this information it going to try to allocate the size of
the next string to copy (calculate in __ft_size__). If it fails, 
__ft_freetab__ free everything allocated so far.
Then it browse the sub-string and the original string and copies
each character of the original string in the sub-string.
When all the sub-strings are copied, the last cell of the array
is fill with a 0. */

char	**ft_split(char const *s, char c)
{
	char	**tab;
	t_var	var;

	if (s == NULL)
		return (NULL);
	init_var(&var);
	tab = malloc(sizeof(char *) * (ft_countrow(s, c) + 1));
	var.idx_s = 0;
	var.idxtab = -1;
	while (tab && ++var.idxtab < ft_countrow(s, c))
	{
		while (s[var.idx_s] == c && s[var.idx_s])
			var.idx_s++;
		tab[var.idxtab] = malloc(sizeof(char) * (ft_size(s, c, var.idx_s) + 1));
		if (!tab[var.idxtab])
			return (ft_freetab(tab));
		var.idx_s2 = -1;
		var.idx_s--;
		while (s[++var.idx_s] != c && s[var.idx_s])
			tab[var.idxtab][++var.idx_s2] = s[var.idx_s];
		tab[var.idxtab][var.idx_s2 + 1] = 0;
	}
	if (tab)
		tab[var.idxtab] = 0;
	return (tab);
}
