/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:14:15 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/20 17:30:22 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(char *str, char a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

static int	last_position(char *str, char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (test(set, str[i]) && i)
		i--;
	return (i);
}

static int	first_position(char *str, char *set)
{
	int	i;

	i = 0;
	while (test(set, str[i]) && str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*str;

	i = (first_position((char *)s1, (char *)set));
	j = (last_position((char *)s1, (char *)set) + 1);
	if (i >= j)
		return (ft_strdup(""));
	size = j - i;
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while (i < j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = 0;
	return (str);
}
