/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:34:46 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:34:46 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)

{
	void	*c;
	char	*v;
	int		b;

	c = malloc(nmemb * size);
	v = (char *)c;
	b = 0;
	while (b < nmemb * size)
	{
		v[b] = 0;
		b++;
	}
	return (c);
}
