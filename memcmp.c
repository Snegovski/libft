/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:27:22 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/14 04:27:22 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

int memcmp(const void *s1, const void *s2, size_t n)

{

	unsigned char *c;
	unsigned char *v;

	c = (unsigned char *) s1;
	v = (unsigned char *) s2;

	int b;

	b = 0;

	while(b < n)
	{
		if(c[b] == v[b])
		{
			return(c[b] - v[b]);
		}
		b++;
	}

	return(0);

}