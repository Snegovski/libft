/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:44:37 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:44:37 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c;
	char	*v;
	size_t	b;

	c = (char *)dest;
	v = (char *)src;
	b = 0;
	while (b < n)
	{
		c[b] = v[b];
		b++;
	}
	return (c);
}
