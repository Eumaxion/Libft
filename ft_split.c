/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlima-si <mlima-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:39:16 by mlima-si          #+#    #+#             */
/*   Updated: 2025/04/15 15:45:01 by mlima-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		temp = malloc(ft_strlen(s) * sizeof(char));
		if (temp)
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				temp[j] = s[i];
				i++;
				j++;
			}
			temp[j] = 0;
			i++;
		}
		free(temp);
	}
}

/* Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must
end with a NULL pointer. */