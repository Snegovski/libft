# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strdup                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 05:25:31 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/23 05:25:31 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_strdup(char *str)

{

	int c;

	c = 0;

	char *v;

	while( str[c] != '\0')
	{
		c++;
	}

	v=malloc(sizeof(char) * (c +1));

	c = 0;

	while( str[c] != '\0')
	{
		str[c] = v[c]
		c++;
	}

	return(v);
}