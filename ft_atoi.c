/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:14:43 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/10 23:20:20 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handling_overflow(const char *str, int sign)

{
	long	total;
	long	temporary;
	int		index;

	index = 0;
	total = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		temporary = total;
		total = total * 10 + str[index] - '0';
		if (temporary > total)
		{
			if (sign == -1)
				return (0);
			else
				return (-1);
		}
		index++;
	}
	return (total * sign);
}

int	ft_atoi(const char *str)
{
	int			index;
	int			sign;

	index = 0;
	sign = 1;
	while ((str[index] == ' ') || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || (str[index] == '+'))
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	return (handling_overflow(str + index, sign));
}

// int	main(void)

// {
// 	printf("%d\n", atoi("-000000003"));
// 	printf("%d\n", ft_atoi("-000000003"));
// 	return (0);
// }

// int	main(void)

// {
// 	char	*v;
// 	char	b[6] = "53737";

// 	v = b;
// 	printf("%d,%d\n", ft_atoi(v), atoi(v));
// }
