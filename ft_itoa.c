/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 04:13:10 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/16 04:13:10 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


	int stringnumbercounter(int n)
	{
		int v;
		v = 0;
		if(n == 0)
			return(1);
		if (n == -2147483648)
			return(11);
		if(n < 0)
		{
			v++;
			n = n * -1;
		}
		while(n > 0)
		{
			n = n / 10;
			v++;
		}
		return(v);
	}


char *ft_itoa(int n)

{
	char *pointer1;
	pointer1 = 0;
	int c;
	c = stringnumbercounter(n);
	pointer1 = malloc(sizeof(char) * (c + 1));
	if( n == 0)
	{
		pointer1[0] = '0';
		pointer1[1] = '\0';
		return(pointer1);
	}
	pointer1[c--] = '\0';
	if (n == -2147483648)
	{
		pointer1[c--] = '8';
		n = -214748364;
	}
	if(n < 0)
	{
		pointer1[0] = '-';
		n = n * - 1;
	}
	while(n > 0 )
	{
		pointer1[c] = n % 10 + '0';
		n = n / 10;
		c--;
	}

	// printf("%d Shalashaska\n", c);
	return(pointer1);
}



int main(void)

{
	char *test;
	test = ft_itoa(-2147483648);
	printf("%s RESULT\n", test);
	free(test);
	return(0);
}