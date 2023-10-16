/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:23:09 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/14 03:23:09 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi( char *str)

{
	int c;

	int v;

	int b;

	c = 0;

	v = 1;

	b = 0;

	while( (str[c] == ' ') || ( str[c] >= 9 && str[c] <= 13))
	{
		c++;
	}
	if( str[c] == '-')
	{
		v = -1;
		c++;
	}
	if( str[c] == '+')
	{
		c++;
	}
	while( str[c] >= '0' && str[c] <= '9')
	{

	}
	return(b * v);
}

int main(void)

{
	char *mazi = "265";
	int c = ft_atoi(mazi);
	int d = atoi(mazi);
	printf("%d -- %d\n", c, d);
	return(0);
}