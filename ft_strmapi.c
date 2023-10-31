/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:38:35 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:23:01 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	int		c;
	char	*v;
	int		b;

	b = 0;
	c = ft_strlen(s);
	if (!s || !f)
	{
		return (0);
	}
	v = malloc(sizeof(char) * (c + 1));
	if (v == 0)
	{
		return (0);
	}
	while (s[b] != '\0')
	{
		v[b] = f(b, s[b]);
		b++;
	}
	v[b] = '\0';
	return (v);
}
