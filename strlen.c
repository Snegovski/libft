/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:48:38 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/21 08:48:38 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen( char const *str )

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