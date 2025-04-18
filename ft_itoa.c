/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:17:21 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/18 12:42:30 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	int size;
	int i;

	if (n < 0)
		n *= -1;
	while (n / 10)
		size++;
	str = malloc((size +1) * sizeof(char));
	if (str)
	{
		i = 0;
		while (n / 10)
			str[i] = n + 48;
		return (str);
	}
	return (NULL);
}
#include <stdio.h>

int main()
{
	int a = 42;
	printf("%s", ft_itoa(a));
}