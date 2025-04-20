/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:17:21 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/20 13:28:07 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbmr_size(int n)
{
	int	size;

	size = 0;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (++size);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	number;
	int			size;

	number = n;
	size = nbmr_size(n);
	if (number < 0)
	{
		number *= -1;
		size += 1;
	}
	str = malloc((size + 1) * sizeof(char));
	if (str)
	{
		str[size] = 0;
		while (size--)
		{
			str[size] = (number % 10) + 48;
			number /= 10;
		}
		if (n < 0)
			str[0] = '-';
		return (str);
	}
	return (NULL);
}
