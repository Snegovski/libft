/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 04:49:37 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/14 04:49:37 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)

{
	void *c;
	c = malloc(nmemb * size);
		
	char *v;
	v = (char *)c;

	int b;
	b = 0;
	while(b < count * size )
	{
		v[b] = 0;
		b++;
	}
	return(c);
	
}