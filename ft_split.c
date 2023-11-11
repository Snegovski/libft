/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 02:50:27 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/11 17:40:34 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pointerassignment(char const *s, int *j, char c)

{
	int		l;
	char	*z;

	l = 0;
	while (s[*j] == c)
		(*j)++;
	l = *j;
	while (s[l] != c && s[l] != '\0')
		l++;
	z = malloc(sizeof(char) * ((l - *j) + 1));
	if (!z)
		return (NULL);
	l = 0;
	while (s[*j] != c && s[*j] != '\0')
	{
		z[l] = s[*j];
		l++;
		(*j)++;
	}
	z[l] = '\0';
	return (z);
}

int	wordcontainer(char const *s, char c)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while (s[n] != '\0')
	{
		while (s[n] == c)
			n++;
		while (s[n] != c && s[n] != '\0')
		{
			n++;
			if (s[n] == c || s[n] == '\0')
			{
				m++;
				break ;
			}
		}
	}
	return (m);
}

char	**ft_split(char const *s, char c)
{
	int		v;
	int		b;
	int		j;
	char	**p;

	v = 0;
	b = 0;
	j = 0;
	if (!s)
		return (NULL);
	b = wordcontainer(s, c);
	p = malloc(sizeof(char *) * (b + 1));
	if (!p)
		return (NULL);
	while (v < b)
	{
		p[v] = pointerassignment(s, &j, c);
		v++;
	}
	p[v] = 0;
	return (p);
}

// int	main(void)
// {
// 	char	**divide;
// 	int		i;

// 	i = 0;
// 	divide = ft_split("shcmmmmmmlicmk", 'm');
// 	while (divide[i])
// 	{
// 		printf("WORD: %s\n", divide[i]);
// 		free(divide[i]);
// 		i++;
// 	}
// 	free(divide);
// 	return (0);
// }
