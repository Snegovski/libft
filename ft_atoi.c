/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:14:43 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/02 13:18:40 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	v;
	int	b;

	c = 0;
	v = 1;
	b = 0;
	while ((str[c] == ' ') || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-' || (str[c] == '+'))
	{
		if (str[c] == '-')
		{
			v = -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		b = b * 10 + str[c] - '0';
		c++;
	}
	return (b * v);
}
//  int	main(void)
// {
// 	char *mazi = "-+48";
// 	int c = ft_atoi(mazi);
// 	int d = atoi(mazi);
// 	printf("%d -- %d\n", c, d);
// 	return (0);
// }
