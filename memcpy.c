/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:34:14 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/14 04:34:14 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memcpy(void *dest, const void *src, size_t n)
{

	char *c;
	char *v; 

	c = (char *)dest;
	v = (char *)src;

	int b;
	b = 0;

	while( b < n)
	{
		c[b] = v[b];
		b++;
	}
	return(c);

}
