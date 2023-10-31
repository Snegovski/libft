/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:43:22 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:43:22 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*c;
	unsigned char	*v;
	int				b;

	c = (unsigned char *)s1;
	v = (unsigned char *)s2;
	b = 0;
	while (b < n)
	{
		if (c[b] == v[b])
		{
			return (c[b] - v[b]);
		}
		b++;
	}
	return (0);
}
