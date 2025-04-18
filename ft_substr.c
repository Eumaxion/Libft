/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:34:16 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/18 12:13:10 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	subs = malloc((len + 1) * sizeof(char));
	if (subs)
	{
		i = 0;
		if (start >= ft_strlen((char *)s))
		{
			subs[i] = 0;
			return (subs);
		}
		while (i < len && s[start])
		{
			subs[i] = s[start];
			i++;
			start++;
		}
		subs[i] = 0;
		return (subs);
	}
	return (NULL);
}
