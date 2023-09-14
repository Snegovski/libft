/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:22:22 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/14 04:22:22 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)

 {
	char *str = (char *)s


	int v;
	v = 0;

	while(v < n)
	{
		if( str[v] == c)
		{
			return(str + v);
		}
		v++;
	}
	return(0);
 }