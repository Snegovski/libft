# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    isdigit                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 05:22:06 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/20 05:22:06 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_isdigit(int c)
{
	if( c >= '0' && c <= '9' )
	{
		return(1);
	}
	else
	{
		return(0);
	}
}