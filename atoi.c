# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    atoi                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 04:49:11 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/23 04:49:11 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_atoi( char *str)

{
	int c;
	
	int v;

	int b;

	c = 0;

	v = 1;

	b = 0;

	while( str[c] == ' ' && ( str[c] >= 9 && str[c] <= 13))
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
		b = b * 10 + c - '0';
		c++;
	}
	return(b * v);
}