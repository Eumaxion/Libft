/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:01:03 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/16 18:08:33 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*n1;
	unsigned char	*n2;

	if (n == 0)
		return (0);
	i = 0;
	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	while (i < n - 1)
	{
		if (n1[i] != n2[i])
			return (n1[i] - n2[i]);
		i++;
	}
	return (n1[i] - n2[i]);
}
