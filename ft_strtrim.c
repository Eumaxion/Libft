/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:14:15 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/15 17:24:30 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	test(char *str, char a)
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

int	last_position(char *str, char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (test(set, str[i]))
	{
		i -= 1;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = (char *)malloc((ft_strlen(s1)) * sizeof(char));
	if (str)
	{
		i = 0;
		j = 0;
		k = 0;
		while (test((char *)set, s1[i]) && s1[i])
			i++;
		j = (last_position((char *)s1, (char *)set) + 1);
		while (i < j)
		{
			str[k] = s1[i];
			i++;
			k++;
		}
		str[k] = 0;
		return (str);
	}
	return (NULL);
}
