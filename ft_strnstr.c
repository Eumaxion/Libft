/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:40:43 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/17 12:48:00 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < (len - 1) && big[i])
	{
		j = 0;
		while ((little[j] == big[i + j] && (i + j < (len))) && little[j])
			j++;
		if (!(little[j]))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
