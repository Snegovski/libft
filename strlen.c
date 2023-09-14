# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 03:33:01 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/23 03:33:01 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_strlen( char *str )

{
	int c;
	c = 0;
	
	while( str[c] != '\0' )
	{
		c++;
	}

	return(c);
}


int main(void)
{

	int mazi [] = "Waleed";
	ft_strlen(mazi);
	return(0);
}